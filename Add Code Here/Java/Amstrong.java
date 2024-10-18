package generalprograms;

import java.util.Scanner;

public class Amstrong {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number1: ");
        int number1 = input.nextInt();
        input.nextLine();
        System.out.println("Enter the number2: ");
        int number2 = input.nextInt();
        for (int i = number1; i <= number2; i++) {
            int hundred = i % 10;
            int temp = i / 10;
            int tens = temp % 10;
            int ones = i / 100;
            int result = (int) (Math.pow(hundred, 3) + Math.pow(tens, 3) + Math.pow(ones, 3));
            if (result == i) {
                System.out.println("It is an amstrong number: " + i);
            }
        }
    }
}
