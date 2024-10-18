import java.util.Scanner;

public class Bubble_Sort {

    public static void printArr(int[] arr){
        System.out.println("The sorted array is: ");
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    public static int[] arrInput(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array: ");
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }
        sc.close();
        return arr;
    }

    public static void main(String[] args) {
        int arr[] = arrInput();
        for (int j = 0; j < arr.length-1; j++) {

            for (int i = 0; i<arr.length-1-j; i++) {

                if (arr[i] > arr[i+1]) {
                    int tmp=arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = tmp;


            }
        }
        }
        printArr(arr);
    }
}