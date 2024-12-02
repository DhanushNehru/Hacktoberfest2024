import java.util.*;
public class Array_list {
    public static void main(String[] args) {
        // Create an array of integers
        ArrayList<String> list = new ArrayList <String>();
        list.add("Apple");
        list.add("Banana");
        list.add("Cherry");
        list.add("Date");
        list.add("Elderberry");
        System.out.println(list);
        for(int  i = 0 ;i<list.size();i++){
            System.out.println(list.get(i));
        }
    }
}
