import java.util.*;
/**
 * Collections_sort
 */
public class Collections_sort {

    public static void main(String[] args) {
        ArrayList <Integer> list = new ArrayList<>();
        list.add(5);
        list.add(2);
        list.add(8);
        list.add(1);
        list.add(9);
        list.add(7);
        
        Collections.sort(list);
        System.out.println(list);
        Collections.sort(list,Collections.reverseOrder());
        System.out.println(list);
        

    }
}