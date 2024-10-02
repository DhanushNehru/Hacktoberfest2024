import java.util.Scanner;

public class Selection_Sort {

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

    public static void selectionSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
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
        
        selectionSort(arr);
        
        System.out.print("Array after sorting: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
        
        sc.close();
    }
}
