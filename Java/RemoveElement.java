import java.util.*;
public class RemoveElement
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter size of the array: ");
        int len=sc.nextInt();
        int[] arr=new int[len];
        System.out.print("Enter elements of the array: ");
        for(int i=0;i<len;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.print("Enter a value that is in the array which is to be removed: ");
        int val=sc.nextInt();
        int ptr=0;
        for(int i=0;i<len;i++)
        {
            if(arr[i]!=val)
            {
                arr[ptr]=arr[i];
                ptr++;
            }
        }
        System.out.print("The number of elements in the array after "+val+" removed: "+ptr);
        
    }
}
