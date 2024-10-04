import java.util.Stack;

public class Duplicate_Parenthses {
    public static void main(String[] args) {
       //In this question if duplicate exist then it will return true else false.
       //and this is duplicate paranthese string ((a+b)) it will return true.
       //else (a+b) it will return false.
        boolean bool=isduplicate("(a+b)");
        if (bool==true) {
            System.out.println("Duplicate exist");
        }else{
            System.out.println("Duplicate not exist");
        }
    }

    public static boolean isduplicate(String str) {
        Stack<Character> ch = new Stack<>();
        for (int i = 0; i < str.length(); i++) {  //TC -> O(n)
            char c = str.charAt(i);
            if (c == ')') {
                int flag = 0;
                while (ch.pop() != '(') {
                    flag++;
                }
                if (flag < 1) {
                    return true;
                }
            } else {
                ch.push(c);
            }
        }
       return false;
    }
}
