public class HeapSort {

    public static void heapSort(int[] array) {
        int n = array.length;

        // Build a max heap
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(array, n, i);
        }

        // Extract elements from heap one by one
        for (int i = n - 1; i > 0; i--) {
            
            swap(array, 0, i);
            
            heapify(array, i, 0);
        }
    }

    // Method to maintain the heap property
    private static void heapify(int[] array, int n, int i) {
        int largest = i; // Initialize largest as root
        int left = 2 * i + 1; // left = 2*i + 1
        int right = 2 * i + 2; // right = 2*i + 2

        // If left child is larger than root
        if (left < n && array[left] > array[largest]) {
            largest = left;
        }

        // If right child is larger than largest so far
        if (right < n && array[right] > array[largest]) {
            largest = right;
        }

        // If largest is not root
        if (largest != i) {
            swap(array, i, largest);
            // Recursively heapify the affected sub-tree
            heapify(array, n, largest);
        }
    }

    // Method to swap two elements in the array
    private static void swap(int[] array, int i, int j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

    // Main method to test the heap sort
    public static void main(String[] args) {
        int[] array = { 12, 11, 13, 5, 6, 7 };

        System.out.println("Original array:");
        printArray(array);

        heapSort(array);

        System.out.println("Sorted array:");
        printArray(array);
    }

    // Method to print the array
    private static void printArray(int[] array) {
        for (int value : array) {
            System.out.print(value + " ");
        }
        System.out.println();
    }
}