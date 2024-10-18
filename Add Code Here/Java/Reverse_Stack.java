import java.util.Stack;

public class Reverse_Stack {
    public static void main(String[] args) {
        Stack<Integer> ss = new Stack<>();
        ss.push(1);
        ss.push(2);
        ss.push(3);
        ss.push(4);
        reverse_Stack(ss);
        while (!ss.isEmpty()) {
            System.out.print(ss.peek()+" ");
            ss.pop();
        }
    }

    public static void reverse_Stack(Stack<Integer> ss) {
        if (ss.isEmpty()) {
            return;
        }

        int temp = ss.pop();
        reverse_Stack(ss);
        PushatBottom(ss, temp);

    }

    public static void PushatBottom(Stack<Integer> stack, int data) {
        if (stack.isEmpty()) {
            stack.push(data);
            return;
        }
        int temp = stack.pop();
        PushatBottom(stack, data);
        stack.push(temp);
    }
}
