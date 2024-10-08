import java.util.Stack;

public class S_Push_At_Bottm {

    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);
        PushatBottom(stack,5);
        while (!stack.isEmpty()) {
            System.out.println(stack.peek());
            stack.pop();
        }
    }

    private static void PushatBottom(Stack<Integer> stack, int data) {
        if (stack.isEmpty()) {
            stack.push(data);
            return;
        }
        
        //store data for backtraking.
        int temp=stack.pop();
        PushatBottom(stack,data);
        stack.push(temp);
    }
}
