public class student {
    public static void main(String[] args) {
        pan p = new pan();
        studentss s = new studentss();
        p.setcolor("Black");
        System.out.println(p.color);
        s.getage(18); 
        System.out.println(s.age);
        s.getname("Asit kumar");
        System.out.println(s.name);
        s.getroll(23);
        System.out.println(s.rollnum);
        
    }
    
}
class pan {
    String color;
    int tipsize;
    void setcolor( String newcolor){
        color = newcolor;
    }
    void settipsize(int newtipsize){
        tipsize = newtipsize;
    }
}
class studentss{
    int rollnum ;
    int age ;
    String name ;
    void getage(int newage){
        age = newage;
    }
    void getroll(int newroll){
        rollnum = newroll;
    }
    void getname (String newname){
        name = newname;
    }
}
