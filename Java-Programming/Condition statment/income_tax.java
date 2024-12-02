import java.util.Scanner;

public class income_tax {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your annual income: ");
        int income = sc.nextInt();
        int tax;
        if(income < 500000){
            System.out.println("Your tax rate is 0");
            tax = 0;
        }
        else if(income>=500000 && income <=1000000){
            tax=(int)(income*0.2);
        }
        else {
            tax=(int)(income*0.3);
        }
        System.out.println("your tax is " + tax);
    }
}