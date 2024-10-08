import java.util.InputMismatchException;
import java.util.Scanner;

public class Linear_Search {

    public static int[] arrInput(Scanner sc) {
        int n = 0;

        while (true) {
            try {
                System.out.println("Enter the size of the array: ");
                n = sc.nextInt();
                if (n <= 0) {
                    System.out.println("Array size must be greater than 0. Please try again.");
                } else {
                    break;
                }
            } catch (InputMismatchException e) {
                System.out.println("Invalid input! Please enter a valid integer.");
                sc.next();
            }
        }

        int[] arr = new int[n];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            while (true) {
                try {
                    arr[i] = sc.nextInt();
                    break;
                } catch (InputMismatchException e) {
                    System.out.println("Invalid input! Please enter a valid integer.");
                    sc.next();
                }
            }
        }
        return arr;
    }

    public static int linearSearch(int[] arr, int key) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int[] arr = arrInput(sc);
        
        int key = 0;
        
        while (true) {
            try {
                System.out.println("Enter the element to search: ");
                key = sc.nextInt();
                break;
            } catch (InputMismatchException e) {
                System.out.println("Invalid input! Please enter a valid integer.");
                sc.next();
            }
        }
        
        int index = linearSearch(arr, key);
        if (index != -1) {
            System.out.println("Element found at index: " + index);
        } else {
            System.out.println("Element not found");
        }
        
        sc.close();
    }
}
