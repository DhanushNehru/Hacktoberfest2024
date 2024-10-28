public class linearsearch {
    public static int linearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {  // If element is found
                return i;  // Return the index
            }
        }
        return -1;  // Return -1 if target is not found
    }

    public static void main(String[] args) {  // Corrected main method signature
        int[] numbers = {3, 5, 7, 9, 11};
        int target = 7;

        int index = linearSearch(numbers, target);
        if (index != -1) {
            System.out.println("Element found at index: " + index);
        } else {
            System.out.println("Element not found in the array.");
        }
    }
}
