import java.util.HashSet;
import java.util.Iterator;

/**
 * Hash_set
 */
public class Hash_set {

    public static void main(String[] args) {
        HashSet<Integer> list = new HashSet<>();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);
        System.out.println(list);

        if (list.size()==0) {
            System.out.println("List is empty");
        }else{
            Iterator<Integer>itr = list.iterator();
            while (itr.hasNext()) {
                int  number = itr.next();
                System.out.println(number);
            }
        }
    }
}