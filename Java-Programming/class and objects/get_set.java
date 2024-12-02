/**
 * get_set
 */
public class get_set {
    public static void main(String[] args) {
        student s = new student();
        s.setname("Asit kumar");
        s.setroll(123);
        System.out.println(s.getname());
        System.out.println(s.getrollno());
    }
    
    
}
class student{
    private String name ;
    int roll;
    String getname (){
        return this.name;
    }
    int getrollno(){
        return this.roll;
    }
    void setname(String newname){
        this.name = newname;
    }
    void setroll (int newroll){
        this.roll = newroll;
    }
}