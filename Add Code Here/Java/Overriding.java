class Parent{

public void getName(){
System.out.println("Hello from Parent");
}
}

public class Overriding extends Parent{

@Override
public void getName(){
System.out.println("Hello from Child");
}

public static void main(String[] args){
Parent c=new Overriding();
c.getName();

}
}