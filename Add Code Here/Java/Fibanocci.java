package generalprograms;

import java.util.ArrayList;
import java.util.Scanner;

public class Fibanocci {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        ArrayList<Integer> series = new ArrayList<>();
        System.out.println("Enter the number: ");
        int number = input.nextInt();
        if (number == 0) {
            System.out.println("0");
        } else if (number == 1) {
            System.out.println(" 0  1");
        } else {
            int number1 = 0;
            int number2 = 1;
            System.out.print(number1 + " ");
            System.out.print(number2 + " ");
            while (number2 <= number) {
                int result = number1 + number2;
                series.add(result);
                number1 = number2;
                number2 = result;
            }
            for (int i : series) {
                System.out.print(i + " ");
            }
        }
    }
}

