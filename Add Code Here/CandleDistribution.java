/*The problem is to distribute n candles among k boxes in a specific pattern. 
The pattern is to fill the boxes in a circular manner, starting from the first box, 
then moving to the last box, then the second box, then the second last box, and so on. 
The goal is to distribute all n candles among the k boxes according to this pattern. */

import java.util.*;

public class CandleDistribution {
    public static void main(String[] args) {
        // Create a Scanner object to read input from the user
        Scanner in = new Scanner(System.in);

        // Prompt the user to enter the number of candles
        System.out.println("Enter the number of candles:");
        int n = in.nextInt();

        // Prompt the user to enter the number of boxes
        System.out.println("Enter the number of boxes:");
        int k = in.nextInt();

        // Create an array to store the number of candles in each box
        int[] arr = new int[k];

        // Initialize a counter to keep track of the number of candles distributed
        int c = 0;

        // First, fill the boxes in a linear manner (from 0 to k-1)
        for (int i = 0; i < k && c < n; i++) {
            arr[i] = arr[i] + 1; // increment the number of candles in the current box
            c = c + 1; // increment the counter
        }

        // If there are still candles left, fill the boxes in a circular manner
        while (n > c) {
            // Fill the boxes from the end to the beginning (from k-2 to 0)
            for (int i = k - 2; i >= 0 && c < n; i--) {
                c = c + 1; // increment the counter
                arr[i] = arr[i] + 1; // increment the number of candles in the current box
            }

            // Fill the boxes from the beginning to the end (from 1 to k-1)
            for (int j = 1; j < k && c < n; j++) {
                c = c + 1; // increment the counter
                arr[j] = arr[j] + 1; // increment the number of candles in the current box
            }
        }

        // Print the final distribution of candles in each box
        System.out.println(Arrays.toString(arr));

        // Close the Scanner object
        in.close();
    }
}
