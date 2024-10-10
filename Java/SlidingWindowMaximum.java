import java.util.*;

public class SlidingWindowMaximum {
  public static void main(String[] args) {
    int[] arr = { 1, 3, -1, -3, 5, 3, 6, 7 };
    int k = 3;
    int[] result = maxSlidingWindow(arr, k);
    System.out.println(Arrays.toString(result));
  }

  public static int[] maxSlidingWindow(int[] nums, int k) {
    if (nums == null || nums.length < k) {
      return new int[0];
    }

    // Result array to store the maximum of each window
    int[] result = new int[nums.length - k + 1];
    Deque<Integer> deque = new LinkedList<>(); // Deque to store indices

    for (int i = 0; i < nums.length; i++) {
      // Remove elements not within the window
      if (!deque.isEmpty() && deque.peek() < i - k + 1) {
        deque.poll();
      }

      // Remove elements smaller than the current element (not useful)
      while (!deque.isEmpty() && nums[deque.peekLast()] < nums[i]) {
        deque.pollLast();
      }

      // Add the current element's index
      deque.offer(i);

      // If the window has reached size `k`, add the maximum to the result
      if (i >= k - 1) {
        result[i - k + 1] = nums[deque.peek()];
      }
    }

    return result;
  }
}
