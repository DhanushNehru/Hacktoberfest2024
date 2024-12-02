public class copy_constructor {
    public static void main(String[] args) {
        Student s = new Student();
        s.name  = "Asit";
    }

}

class Student {
    String name;
    int age;

    Student(String name) {
        this.name = name;
    }
    Student (int age){
        this.age = age;
    }
    public Student() {
        //TODO Auto-generated constructor stub
    }

}