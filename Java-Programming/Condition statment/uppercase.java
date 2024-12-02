import java.util.Scanner;

/**
 * uppercase
 */
public class uppercase {

    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        String str = sc.nextLine();
        char c = str.charAt(0);
        if(c >='A' && c<='Z'){
            System.out.println("Yes 1");
        }else if(c>='a' && c<='b'){
            System.out.println("No 2");
        }else{
            System.out.println("No 3");
        }

    }
}