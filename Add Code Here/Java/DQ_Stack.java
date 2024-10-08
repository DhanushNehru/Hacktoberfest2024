import java.util.Deque;
import java.util.LinkedList;
import java.util.Stack;

public class DQ_Stack {

    static class Stackss {
        static Deque<Integer> deque = new LinkedList<>();

        // isEmpty
        boolean isempty() {
            return deque.isEmpty();
        }

        // Add
        void push(int data) {
            deque.addLast(data);
        }

        // Remove
        int pop() {
            return deque.removeLast();
        }

        // Peek
        int peek() {
            return deque.getLast();
        }

    }

    public static void main(String[] args) {
        // We are implementing Stack Using Deque
        Stackss s = new Stackss();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);

        System.out.println("Implement Stack Using Deque \n");
        //Printing
        while (!s.isempty()) {
            System.out.println(s.peek());
            s.pop();
        }

        System.out.println("Genuin Stack \n");
        Stack <Integer> stac= new Stack<>();
        stac.push(1);
        stac.push(2);
        stac.push(3);
        stac.push(4);
        stac.push(5);
        while (!stac.isEmpty()) {
            System.out.println(stac.peek());
            stac.pop();
        }
    }

}
