import java.util.*;
public class SpiralMatrix {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        char[][] matrix = new char[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]='.';
            }
        }
        if(n%2==0){
            int l=0,r=n-1,t=0,d=n-1;
            int i=0,j=0;
            while(l<n/2){
                while(j<r){
                    matrix[i][j]='*';
                    j++;
                }
                while(i<d){
                    matrix[i][j]='*';
                    i++;
                }
                while(j>l){
                    matrix[i][j]='*';
                    j--;
                }
                while(i>t){
                    matrix[i][j]='*';
                    i--;
                }
                l+=2;t+=2;r-=2;d-=2;
                i=t;j=l;
            }
        }
        else{
            int l=0,r=n-1,t=0,d=n-1;
            int i=0,j=0;
            while(l<(n+1)/2){
                while(j<r){
                    matrix[i][j]='*';
                    j++;
                }
                
                while(i<d){
                    matrix[i][j]='*';
                    i++;
                }
                
                while(j>l){
                    matrix[i][j]='*';
                    j--;
                }
                t+=2;
                
                while(i>t){
                    matrix[i][j]='*';
                    i--;
                }
                l+=2;r-=2;d-=2;
            }
            matrix[i][j]='*';
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
