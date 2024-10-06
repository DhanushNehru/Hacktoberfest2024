//find the frequency of each element in a given array
import java.util.*;
public class FindFrequencyOfElement {
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		System.out.println("Enter size array:");
		int n=sc.nextInt();
		int[] arr = new int[n];
		for(int i=0; i<n; i++){
		    arr[i] = sc.nextInt();
		}
		findFreq(arr);
	}
	public static void findFreq(int[] arr){
	    int n=arr.length;
	    int[] freq = new int[n+1];
	    for(int num : arr){
	        freq[num]++;
	    }
	    for(int i=1; i<=n; i++){
	        System.out.println("Frequency of "+i+" :"+freq[i]+"");
	    }
	}
}

/*
Output:

Enter array size : 5
Enter the Element: 1 2 2 3 3
Frequency of 1 :1
Frequency of 2 :2
Frequency of 3 :2
Frequency of 4 :0
Frequency of 5 :0

*/