import java.util.Arrays;

public class SelectionSort {
    // Method to perform selection sort
    public static void selectionSort(int[] array) {
        int n = array.length;

        // One by one move the boundary of the unsorted subarray
        for (int i = 0; i < n - 1; i++) {
            // Find the minimum element in the unsorted array
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (array[j] < array[minIndex]) {
                    minIndex = j; // Update index of the minimum element
                }
            }

            // Swap the found minimum element with the first element
            int temp = array[minIndex];
            array[minIndex] = array[i];
            array[i] = temp;
        }
    }

    // Main method to test the selection sort
    public static void main(String[] args) {
        int[] array = {64, 25, 12, 22, 11}; // Sample array
        System.out.println("Original array: " + Arrays.toString(array));

        selectionSort(array); // Call the selection sort method

        System.out.println("Sorted array: " + Arrays.toString(array)); // Print sorted array
    }
}
