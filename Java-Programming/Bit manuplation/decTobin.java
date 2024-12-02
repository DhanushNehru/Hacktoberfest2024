import java.util.*;

public class decTobin {
    public static void decTobin(int n) {
        int pow = 0;
        int binnum =0;
        while (n > 0) {
            int rem = n % 2;
            binnum = binnum + (rem * (int) Math.pow(10, pow));
            n = n / 2;
            pow++;
        }
        System.out.println( "Bin foerm "+binnum);
        
    }
    public static void main(String[] args) {
        decTobin(23);
    }
}
