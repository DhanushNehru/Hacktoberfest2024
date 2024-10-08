import java.util.LinkedList;
import java.util.Queue;

/**
 * We make data Structer Like 
 * Stack using Queue.
 * On the order of LIFO.
 * Principle
 */
public class Stackss_2_Que {
    public static class stak {
        static Queue<Integer> q = new LinkedList<>();
        static Queue<Integer> q1 = new LinkedList<>();

        // Is Empty.
        public static boolean isempyt() {
            return q.isEmpty() && q1.isEmpty();
        }

        // add
        public static void push(int data) {
            if (!q.isEmpty()) {
                q.add(data);
            } else {
                q1.add(data);
            }
        }

        // remove
        public static int pop() {
            int top = -1;
            if (isempyt()) {
                System.out.println("Stack is Empty.");
                return top;
            }
            if (!q.isEmpty()) {
                while (!q.isEmpty()) {
                    top = q.remove();
                    if (q.isEmpty()) {

                        break;
                    }
                    System.out.println("Lop break q");
                    q1.add(top);
                }
            } else {
                while (!q1.isEmpty()) {
                    top = q1.remove();
                    if (q1.isEmpty()) {
                        break;
                    }
                    System.out.println("Lop break q1");
                    q.add(top);
                }
            }
            return top;
        }

        // peek
        public static int peek() {
            int top = -1;
            if (isempyt()) {
                System.out.println("Stack is Empty.");
                return top;
            }

            // Condtion for the peek the Queue data.
            if (!q.isEmpty()) {
                while (!q.isEmpty()) {
                    top = q.remove();
                    q1.add(top);
                }
            } else {
                while (!q1.isEmpty()) {
                    top = q1.remove();
                    q.add(top);
                }
            }
            return top;
        }
    }

    public static void main(String[] args) {
        stak s = new stak();
        System.out.println(s.isempyt());
        s.push(0);
        s.push(1);
        s.push(2);
        s.push(3);

        //Printing the Stack.
        while (!s.isempyt()) {
            System.out.println(s.peek());
            s.pop();
        }
    }
}