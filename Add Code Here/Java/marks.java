import java.util.*;
class Student
{
    //property
    public int s1,s2,s3;
    //method
    public int total()
    {
        return s1+s2+s3;
    }
    public float average()
    {
        return total()/3;
    }
    public char grade()
    {
        if(average()>=70)
        return 'A';
        else
        return 'B';
    }
}
public class Student1 {
    public static void main(String[]args)
    {
        //object of class
        Student st = new Student();
        try (Scanner sc = new Scanner(System.in)) 
        {
            System.out.printf("Enter the marks of s1: ");
            st.s1 = sc.nextInt();
            System.out.printf("Enter the marks of s2: ");
            st.s2 = sc.nextInt();
            System.out.printf("Enter the marks of s3: ");
            st.s3 = sc.nextInt();
            System.out.println("Total marks is: "+st.total());
            System.out.println("Grade is: "+st.grade());
        }
    }
}
