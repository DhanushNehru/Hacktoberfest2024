import java.util.*;
public class linked_list {
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);
        Iterator<Integer>Itr = list.iterator();
        
        while (Itr.hasNext()) {
            int numer = Itr.next();
            System.out.println(numer);
        }
    }
}
