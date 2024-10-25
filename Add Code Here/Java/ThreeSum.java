import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class ThreeSum {

    public static List<List<Integer>> threeSum(int[] nums) {
        // Sort the array to simplify the problem
        Arrays.sort(nums);
        List<List<Integer>> result = new ArrayList<>();
        
        // Iterate over the array
        for (int i = 0; i < nums.length; i++) {
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Two pointers approach
            int left = i + 1;
            int right = nums.length - 1;
            
            while (left < right) {
                int total = nums[i] + nums[left] + nums[right];
                
                if (total == 0) {
                    // Found a valid triplet
                    result.add(Arrays.asList(nums[i], nums[left], nums[right]));
                    left++;
                    right--;
                    
                    // Skip duplicates for the second and third elements
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                } else if (total < 0) {
                    // Move the left pointer to increase the sum
                    left++;
                } else {
                    // Move the right pointer to decrease the sum
                    right--;
                }
            }
        }
        
        return result;
    }

    public static void main(String[] args) {
        int[] nums = {-1, 0, 1, 2, -1, -4};
        List<List<Integer>> triplets = threeSum(nums);
        System.out.println(triplets);
    }
}
