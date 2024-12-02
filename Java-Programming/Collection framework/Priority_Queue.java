import java.util.Iterator;
import java.util.PriorityQueue;

public class Priority_Queue {
    public static void main(String[] args) {
        PriorityQueue<String>list= new PriorityQueue<>();
        list.add("Apple");
        list.add("Banana");
        list.add("Cherry");
        list.add("Date");
        list.add("Elderberry");
        System.out.println(list.peek());
        System.out.println(list.poll());
        Iterator<String>itr = list.iterator();
        while (itr.hasNext()) {
            System.out.println(itr.next());
        }
    }
}