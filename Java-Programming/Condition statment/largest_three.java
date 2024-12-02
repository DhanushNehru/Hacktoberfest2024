public class largest_three {
    public static void main(String[] args) {
        int a =4;
        int b=3;
        int c= 6;
        if(a>b && a>c){
            System.out.println("a is largest");
        }
        else if(b>c && b>a){
            System.out.println("b is largest");
        }
        else {
            System.out.println("c is largest");
        }
    }
}
