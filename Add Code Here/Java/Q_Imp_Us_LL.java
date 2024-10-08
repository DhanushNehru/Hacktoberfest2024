public class Q_Imp_Us_LL {

    static class Node {
        int data;
        Node next;

        // Constructer
        Node(int data) {
            this.data = data;
            this.next = null;
        }

    }

    static class Queue {
        static Node head = null;
        static Node tail = null;

        // Is Empyt
        public boolean isEmpty() {
            return head == null && tail == null;
        }

        // add
        public void add(int data) {
            Node node = new Node(data);
            if (isEmpty()) {
                head = tail = node;
                return;
            }
            // addition at last
            tail.next = node;
            tail = node;
        }

        // delete
        public int del() {
            if (isEmpty()) {
                System.out.println("Queue is Empty.");
                return -1;
            }
            int result = head.data;

            if (head == tail) {
                head = tail = null;
                return result;
            } else {
                head = head.next;
            }
            return result;
        }

        // peek
        public void peek() {
            System.out.println("Peek " + head.data);
        }

    }

    public static void main(String[] args) {
        Queue q = new Queue();
        q.add(0);
        q.add(1);
        q.add(2);
        while (!q.isEmpty()) {
            q.peek();
            q.del();
        }
    }
}
