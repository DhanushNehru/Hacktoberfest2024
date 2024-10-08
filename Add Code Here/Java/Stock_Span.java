import java.util.Arrays;
import java.util.Stack;

public class Stock_Span {
    public static void main(String[] args) {
        int[] Stock = { 100, 80, 60, 70, 60, 85, 100 };
        int[] Span = new int[Stock.length];
        findSpan(Stock, Span);
        System.out.println(Arrays.toString(Span));
    }

    public static void findSpan(int[] stock, int[] Span) {
        Stack<Integer> s = new Stack<>();
        Span[0] = 1;
        s.push(0);
        for (int i = 1; i < stock.length; i++) {
            int curr = stock[i];
            while (!s.isEmpty() && curr > stock[s.peek()]) {
                s.pop();
            }
            if (s.isEmpty()) {
                Span[i] = i + 1;
            } else {
                int prevhigh = s.peek();
                Span[i] = i - prevhigh;
            }
            s.push(i);
        }
    }
}
