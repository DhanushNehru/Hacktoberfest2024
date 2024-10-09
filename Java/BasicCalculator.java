import java.util.Stack;

class Solution {
    public int calculate(String s) {
        Stack<Integer> stack = new Stack<>();
        int num = 0;
        int sign = 1; // 1 for positive, -1 for negative
        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);

            if (Character.isDigit(c)) {
                num = num * 10 + (c - '0'); // Build the number
            } else if (c == '+') {
                result += sign * num; // Add the last number to result
                sign = 1; // Set sign to positive for next number
                num = 0; // Reset num to start building the next number
            } else if (c == '-') {
                result += sign * num; // Add the last number to result
                sign = -1; // Set sign to negative for next number
                num = 0; // Reset num to start building the next number
            } else if (c == '(') {
                stack.push(result); // Push result to stack
                stack.push(sign); // Push sign to stack
                result = 0; // Reset result for the new sub-expression
                sign = 1; // Default sign is positive
            } else if (c == ')') {
                result += sign * num; // Add the last number to result
                result *= stack.pop(); // Multiply by the sign before the parentheses
                result += stack.pop(); // Add the result before the parentheses
                num = 0; // Reset num for next calculation
            }
        }

        result += sign * num; // Add any remaining number to the result
        return result;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        String expression = "1 + (2 - (3 + 4))";
        int result = solution.calculate(expression);
        System.out.println("Result: " + result); // Expected output: -4
    }
}
