import java.util.*;

public class Array_Deque {
    public static void main(String[] args) {
        Deque<Integer> deque = new ArrayDeque<Integer>();
        deque.add(1);
        deque.add(2);
        deque.addFirst(5);
        deque.addLast(6);
        System.out.println(deque);
        
    }
}