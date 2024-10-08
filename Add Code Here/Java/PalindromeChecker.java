import java.util.Scanner;

public class PalindromeChecker {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int rev = 0;
        int temp = n;
        while(n>0){
            rev = rev*10 + (n%10);
            n = n/10;
        }
        if(rev== temp){
            System.out.println(temp + "Is Palindrome");
        } else {
            System.out.println(temp + "Is NOT Palindrome");
        }
    }


}
