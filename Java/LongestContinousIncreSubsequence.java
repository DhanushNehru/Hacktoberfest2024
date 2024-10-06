import java.util.*;
public class LongestContinousIncreSubsequence {
    public static void main(String[] args) {
        System.out.println("Enter the size of array:");
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr = new int[n];
        System.out.println("enter the element: ");
        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }
        int res=findLCIS(arr, n);
        System.out.println("Longest continous increasing subsequence:"+res);

    }

    static int findLCIS(int arr[],int n){

        int maxSubSeq = 0;
        int count=1;
        if(n==1) return 1;
        if(n==0) return 0;
        for(int i=1; i<n; i++){
            if(arr[i]>arr[i-1]){
                count++;
            }else {
                count=1;
            }
            maxSubSeq = Math.max(count, maxSubSeq);
        }
        return maxSubSeq;
    }
}