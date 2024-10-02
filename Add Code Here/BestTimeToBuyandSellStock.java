public class MaxProfit {

    // Method to calculate the maximum profit from one transaction
    public static int maxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        // Loop through each price
        for (int price : prices) {
            // Update the minimum price found so far
            if (price < minPrice) {
                minPrice = price;
            }
            // Update maxProfit if the current profit is greater than previous maxProfit
            else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice;
            }
        }

        return maxProfit;
    }

    // Main method to run test cases
    public static void main(String[] args) {
        // Test cases
        int[][] testCases = {
            {7, 1, 5, 3, 6, 4},  // Test case 1
            {7, 6, 4, 3, 1},      // Test case 2
            {1, 2, 3, 4, 5},      // Test case 3
            {3, 3, 3, 3, 3},      // Test case 4
            {2, 1, 2, 1, 2}       // Test case 5
        };
        int[] expectedResults = {5, 0, 4, 0, 1}; // Expected results

        // Running the test cases
        for (int i = 0; i < testCases.length; i++) {
            int result = maxProfit(testCases[i]);
            System.out.println("Test case " + (i+1) + ": Expected " + expectedResults[i] + ", Got " + result + ", " + (result == expectedResults[i] ? "Pass" : "Fail"));
        }
    }
}
