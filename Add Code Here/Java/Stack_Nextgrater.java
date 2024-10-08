import java.util.Arrays;
import java.util.Stack;

public class Stack_Nextgrater {

    // Variation of Question type.
    // Next grater in right side. for (int i = nextGrater.length-1; i >=0; i--) {
    // //TC O(N)
    // Next grater in left side. for (int i = 0; i <nextGrater.length; i++) { //TC
    // O(N)
    // Next smaller in right side. for (int i = nextGrater.length-1; i >=0; i--) {
    // //TC O(N)
    // while (!stack.isEmpty() && arr[stack.peek()]>=arr[i]) {
    // Next smaller in left side. for (int i = 0; i<nextGrater.length; i++) { //TC
    // O(N)
    // while (!stack.isEmpty() && arr[stack.peek()]<=arr[i]) {

    public static void main(String[] args) {
        int arr[] = { 6, 8, 0, 1, 3 };
        int nextGrater[] = new int[arr.length];
        Stack<Integer> stack = new Stack<>();
        //Next grater in Right.
        for (int i = nextGrater.length - 1; i >= 0; i--) { // TC O(N)
            while (!stack.isEmpty() && arr[stack.peek()] <= arr[i]) {
                stack.pop();
            }
            if (stack.isEmpty()) {
                nextGrater[i] = -1;
            } else {
                nextGrater[i] = arr[stack.peek()];
            }
            stack.push(i);
        }
        System.out.println(Arrays.toString(nextGrater));
    }
}
