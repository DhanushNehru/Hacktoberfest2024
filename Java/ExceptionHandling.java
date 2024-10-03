import java.util.*;
class CHECK_PNAME extends Exception {
    public CHECK_PNAME(String message) {
        super(message);
    }
}

class CHECK_PID extends Exception {
    public CHECK_PID(String message) {
        super(message);
    }
}

class CHECK_Description extends Exception {
    public CHECK_Description(String message) {
        super(message);
    }
}

class Product {
    private String pname;
    private String pid;
    private String category;
    private String description;
    private double price;

    public Product(String pname, String pid, String category, String description, double price) 
            throws CHECK_PNAME, CHECK_PID, CHECK_Description {
        if (pname.length() > 20 || !pname.matches("[a-zA-Z]+")) {
            throw new CHECK_PNAME("Product name must be alphabetic and less than 20 characters.");
        }
        if (!pid.matches("[a-zA-Z0-9]+") || pid.matches("[^a-zA-Z0-9]")) {
            throw new CHECK_PID("Product ID must contain only alphabets and digits.");
        }
        if (description.length() > 50) {
            throw new CHECK_Description("Product description must be less than 50 characters.");
        }
        
        this.pname = pname;
        this.pid = pid;
        this.category = category;
        this.description = description;
        this.price = price;
    }

    public void display() {
        System.out.println("Product Name: " + pname);
        System.out.println("Product ID: " + pid);
        System.out.println("Category: " + category);
        System.out.println("Description: " + description);
        System.out.println("Price: " + price);
        System.out.println("------------------------");
    }
}

public class ExceptionHandling {
    public static void main(String[] args) {
        Product[] products = new Product[5];
        
        System.out.println("Product Registration Details\n");

        try {
            products[0] = new Product("Laptop", "LTP123", "Electronics", "High performance laptop", 1500.00);
            products[1] = new Product("Phone", "PH4567", "Electronics", "Latest smartphone", 800.00);
            products[2] = new Product("Tablet", "TAB1234", "Electronics", "Portable and lightweight tablet", 500.00);
            products[3] = new Product("SmartWatch", "SW789", "Accessories", "Wearable tech device", 200.00);
            products[4] = new Product("Headphones", "HP1122", "Accessories", "Noise-cancelling headphones", 150.00);

            for (Product product : products) {
                product.display();
            }

        } catch (CHECK_PNAME | CHECK_PID | CHECK_Description e) {
            System.out.println("Exception: " + e.getMessage());
        }
    }
}