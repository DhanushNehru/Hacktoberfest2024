import java.util.ArrayList;

public class Stackss {
    
    public static class stack {
        ArrayList<Integer> list = new ArrayList<>();

        // check stack is Empty or not.
        // if true then list is empty else not empyt
        public boolean isEmpty() {
            return list.size() == 0;
        }

        // add
        public void push(int data) {
            list.add(data);
        }

        // dispy data
        public int peek() {
            if (isEmpty()) {
                return -1;
            }
            return list.get(list.size() - 1);
        }

        // delete form top
        public int pop() {
            if (isEmpty()) {
                return -1;
            }
            int top = list.get(list.size() - 1);
            list.remove(list.size() - 1);
            return top;
        }

    }

    //Scratch implemention.

    public static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            this.next=null;
        }
    }
    
    //Conditon Checker.
    public boolean isEmpty(){
        return head==null;
    }
    
    //add
    public void add(int data){
        Node newNode= new Node(data);
        size++;
        if (isEmpty()) {
            head=tail=newNode;
            return;
        }
        newNode.next=head;
        head=newNode;
    }

    //printing 
    public void printing(){
        Node temp=head;
        while (temp!=null) {
            System.out.println(temp.data +" --> ");
            // temp=temp.next;
            break;
        }
        // System.out.println("null");
    }

    //remove peek.
    public void remove(){
        if (head==null) {
            System.out.println("LinkedList is Empty.");
            return;
        }else if (head.next==null) {
            head=tail=null;
            size=0;
            return;
        }
        size--;
        //removing step.
        head=head.next;
    }

    public static Node head;
    public static Node tail;
    public static int size;

    public static void main(String[] args) {
        Stackss sT= new Stackss();
        stack st = new stack();
        st.push(0);
        st.push(1);
        st.push(2);
        while (!st.isEmpty()) {
            System.out.println("Peek " + st.peek());
            st.pop();
        }
        System.out.println(st.isEmpty());

        sT.add(1);
        sT.add(2);
        sT.add(3);
        sT.add(4);
        sT.add(5);
        sT.printing();
        while (size!=0) {
            sT.printing();
            sT.remove();
        }
        System.out.println("LL is empty");
    }

    public void printiing() {
    }
}
