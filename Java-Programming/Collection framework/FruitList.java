import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class FruitList {
    public static void main(String[] args) {
        List<String> fruitList = new ArrayList<>();
        fruitList.add("Apple");
        fruitList.add("Banana");
        fruitList.add("Cherry");
        fruitList.add("Date");

        if (fruitList.isEmpty()) {
            System.out.println("The list is empty.");
        } else {
            Iterator<String> itr = fruitList.iterator();
            while (itr.hasNext()) {
                String fruit = itr.next();
                System.out.println(fruit);
            }
        }
    }
}