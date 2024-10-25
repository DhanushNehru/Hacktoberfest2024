import java.util.Stack;

public class ValidParentheses {
    public static void main(String[] args) {
        System.out.println(isValid("[{()[]()}[]]"));
    }

    // condition to check wether string is valid or not.
    public static boolean isValid(String str) {
        Stack<Character> chr = new Stack<>();
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch == '(' || ch == '{' || ch == '[') {
                chr.push(ch);
            } else {
                if (chr.isEmpty()) {
                    return false;
                }
                if ((chr.peek() == '(' && ch == ')') ||
                    (chr.peek() == '{' && ch == '}') ||
                    (chr.peek() == '[' && ch == ']')) {
                    chr.pop();
                } else {
                    return false;
                }
            }
        }

        if (chr.isEmpty()) {
            return true;
        } else {
            return false;
        }
    }
}
