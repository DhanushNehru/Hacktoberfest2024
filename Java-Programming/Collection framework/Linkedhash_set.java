import java.util.*;
public class Linkedhash_set {
    public static void main(String[] args) {
        LinkedHashSet<String> set = new LinkedHashSet<String>();
        set.add("Apple");
        set.add("Banana");
        set.add("Cherry");
        set.add("Apple");
        System.out.println(set);
        for(int  i =0 ;i<set.size();i++){
            System.out.println(set.getLast());

        }
        if(set.size()==0){
            System.out.println("Set is empty");
        }else{
            Iterator<String> str = set.iterator();
            while (str.hasNext()) {
                System.out.println(str.next());
            }
        }

    }
}
