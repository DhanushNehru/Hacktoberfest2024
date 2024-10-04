import java.util.Stack;

/**
 * 
 * 
 * Using pop in O(n)
 * 
 * 
 */
public class Q_Using2_stacks {
    static class Queue {
        static Stack<Integer> s = new Stack<>();
        static Stack<Integer> s1 = new Stack<>();

        public boolean isEmpty() {
            return s.isEmpty();
        }

        // add
        void add(int data) {
            s.add(data);
        }

        // remover
        int remove() {
            if (isEmpty()) {
                System.out.println("Queue is Empty.");
                return -1;
            }

            while (!isEmpty()) {
                s1.push(s.pop());
            }

            int result = s1.pop();

            while (!s1.isEmpty()) {
                s.push(s1.pop());
            }
            return result;
        }

        // peek
        int peek() {

            if (isEmpty()) {
                System.out.println("Queue is Empty.");
                return -1;
            }

            while (!isEmpty()) {
                s1.push(s.pop());
            }

            int peek = s1.peek();

            while (!s1.isEmpty()) {
                s.push(s1.pop());
            }
            return peek;
        }

    }

    public static void main(String[] args) {
        Queue q = new Queue();
        q.add(0);
        q.add(1);
        q.add(2);
        while (!q.isEmpty()) {
            System.out.println("Peek "+q.peek());
            q.remove();
        }

    }
}

/**
 * 
 * 
 * Using push in O(n)
 * 
 * 
 */

// import java.util.Stack;

// public class Q_Using2_stacks {
// static public class Queue {
// static Stack<Integer> stack = new Stack<>();
// static Stack<Integer> stack1 = new Stack<>();

// // isempyt
// public boolean isEmpty() {
// return stack.isEmpty();
// }

// // add
// public void add(int data) {
// while (!isEmpty()) {
// stack1.add(stack.pop());
// }

// stack.push(data);

// while (!stack1.isEmpty()) {
// stack.add(stack1.pop());
// }
// }

// //remove
// public int delete(){
// if (isEmpty()) {
// System.out.println("Queue is Empty.");
// return -1;
// }
// return stack.pop();
// }

// //peek
// public int peek(){
// return stack.peek();
// }

// }

// public static void main(String[] args) {
// Queue q= new Queue();
// q.add(0);
// q.add(1);
// q.add(2);

// while (!q.isEmpty()) {
// System.out.println("Peek "+ q.peek());
// q.delete();
// }
// }
// }
