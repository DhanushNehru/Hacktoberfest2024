import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * Iterator_interface
 */
public class Iterator_interface {

    public static void main(String[] args) {
        List <String> list = new ArrayList<>();
        list.add("Asit kumar");
        list.add("Amit kumar");
        list.add("Dheeraj kumar");
        list.add("Rahul kumar");
        Iterator<String>Iterator = list.iterator();
        while(Iterator.hasNext()){
            System.out.println(Iterator.next());
        }
    }
}