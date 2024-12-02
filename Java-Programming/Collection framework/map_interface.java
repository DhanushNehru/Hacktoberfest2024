import java.util.*;
public class map_interface {
    public static void main(String[] args) {
        Map<String, Integer> map = new HashMap<String, Integer>();
        map.put("Asit ",20);
        map.put("Rahul ",30);
        map.put("Amit ", 25);
        map.put("dheeraj", 20);
         
        for(Map.Entry m:map.entrySet()){
            System.out.println(m.getKey()+" "+m.getValue());
            }
        
    }
}
