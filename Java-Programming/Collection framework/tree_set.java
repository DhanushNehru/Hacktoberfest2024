import java.util.*;
public class tree_set {
    public static void main(String[] args) {
        TreeSet<Integer>set = new TreeSet<>();
        set.add(10);
        set.add(20);
        set.add(30);
        set.add(40);
        set.add(50);
        System.out.println(set.addAll(set));
        System.out.println(set.first());
        System.out.println(set.getLast());
        System.out.println(set.getLast()-1);
        System.out.println(set.pollFirst());
        System.out.println(set.pollLast());
    }
}
