import java.util.*;

public class binTodec {
    public static void binTodec(int bitnum){
        int mynumber =bitnum;
        int pow =0;
        int decnum =0;
        while(bitnum>0){
            decnum += (bitnum%10)*Math.pow(2,pow);
            bitnum/=10;
            pow++;
        }
        System.out.println("Decimal of "+mynumber+ "="+ decnum);


    }
    public static void main(String[] args) {
        binTodec(1010);
        
    }

    
}
