import java.util.Scanner;

public class Insertion_Sort {

    public static int[] arrInput(Scanner sc) {
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        return arr;
    }

    public static void insertionSort(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int[] arr = arrInput(sc);
        
        System.out.print("Array before sorting: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        insertionSort(arr);
        
        System.out.print("Array after sorting: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        sc.close();
    }
}
