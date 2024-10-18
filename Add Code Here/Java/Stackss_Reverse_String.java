import java.util.Stack;

public class Stackss_Reverse_String {
    public static void main(String[] args) {
        String str = "Mehwish";
        System.out.println("Your reverse String : " + reverStrig(str));
    }

    private static String reverStrig(String str) {
        Stack<Character> ss = new Stack<>();
        int i = 0;
        while (i < str.length()) {
            ss.push(str.charAt(i));
            i++;
        }
        StringBuilder sb = new StringBuilder();
        while (!ss.isEmpty()) {
            sb.append(ss.pop());
        }

        return sb.toString();
    }
}
