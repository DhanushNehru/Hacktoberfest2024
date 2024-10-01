import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        System.out.println(reverseWords(s));
        sc.close();
    }
    public static  String reverseWords(String s) {
        String[] s2 = s.trim().split("\\s+");
        String s3 = "";
        for (int i = s2.length - 1; i > 0; i--) {
            s3 += s2[i] + " ";
        }
        return s3 + s2[0];
    }
}