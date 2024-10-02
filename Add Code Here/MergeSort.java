import java.util.Arrays;

public class MergeSort {
   // Constructor (not necessary, can be omitted)
   public MergeSort() {
   }

   public static void main(String[] args) {
      // Sample input array
      int[] arr = new int[]{5, 4, 3, 2, 1};

      // Perform merge sort on the array
      arr = mergesort(arr);

      // Print the sorted array
      System.out.println(Arrays.toString(arr));
   }

   // Recursive method to divide the array and sort it
   static int[] mergesort(int[] arr) {
      // Base case: if the array has only one element, return it as it is already sorted
      if (arr.length == 1) {
         return arr;
      } else {
         // Find the middle index to split the array into two halves
         int mid = arr.length / 2;

         // Recursively sort the left half of the array
         int[] left = mergesort(Arrays.copyOfRange(arr, 0, mid));

         // Recursively sort the right half of the array
         int[] right = mergesort(Arrays.copyOfRange(arr, mid, arr.length));

         // Merge the two sorted halves into a single sorted array
         return merge(left, right);
      }
   }

   // Helper method to merge two sorted arrays into one sorted array
   private static int[] merge(int[] left, int[] right) {
      // Create a new array to hold the merged result
      int[] merged = new int[left.length + right.length];

      // Indices to track the current element in the left, right, and merged arrays
      int i = 0; // index for left array
      int j = 0; // index for right array
      int k;     // index for merged array

      // Iterate over both arrays and merge them in sorted order
      for (k = 0; i < left.length && j < right.length; k++) {
         // If the current element in the left array is smaller, add it to the merged array
         if (left[i] < right[j]) {
            merged[k] = left[i];
            i++;
         } else {
            // Otherwise, add the current element from the right array
            merged[k] = right[j];
            j++;
         }
      }

      // If there are remaining elements in the left array, add them to the merged array
      while (i < left.length) {
         merged[k] = left[i];
         i++;
         k++;
      }

      // If there are remaining elements in the right array, add them to the merged array
      while (j < right.length) {
         merged[k] = right[j];
         j++;
         k++;
      }

      // Return the merged and sorted array
      return merged;
   }
}
