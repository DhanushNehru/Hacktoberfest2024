
public class LexicalPrint {

    public static void printLexical(int n, int a) {
        if (a > n) {
            return;
        }
        System.out.println(a);
        int i = (a == 0) ? 1 : 0;
        for (; i <= 9; i++) {
            int next = a * 10 + i;
            printLexical(n, next);
        }
        // printLexical(n, a + 1);

    }

    public static void main(String[] args) {
        printLexical(13, 0);
    }
}
