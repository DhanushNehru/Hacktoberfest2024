
//refer -- https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
import java.util.Scanner;

public class patterns {

    class Pattern {
        public static void pattern1(int n) {
            for (int i = 1; i <= n; i++) {
                for (int j = 0; j < i; j++) {
                    System.out.print("* ");
                }
                System.out.println();
            }
        }

        public static void pattern2(int n) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= i; j++) {
                    System.out.print("*");
                }
                System.out.println();
            }
        }

        public static void pattern5(int n) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= (n - i - 1); j++) {
                    System.out.print("*");
                }
                System.out.println();
            }
        }

        public static void pattern7(int n) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    System.out.print(" ");
                }
                for (int j = 0; j < 2 * i + 1; j++) {
                    System.out.print("*");
                }
                for (int j = 0; j < n - i - 1; j++) {
                    System.out.print(" ");
                }
                System.out.println();
            }
        }

        public static void pattern8(int n) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < i; j++) {
                    System.out.print(" ");
                }

                for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
                    System.out.print("*");
                }

                for (int j = 0; j < i; j++) {
                    System.out.print(" ");
                }
                System.out.println();
            }
        }

        public static void pattern10(int n) {
            for (int i = 0; i < 2 * n - 1; i++) {
                int stars = i;
                if (i > n) {
                    stars = 2 * n - i - 1;
                }
                for (int j = 0; j < stars; j++) {
                    System.out.print("*");
                }
                System.out.println();
            }
        }

        public static void pattern11(int n) {
            int start = 1;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    start = 1;
                }
                for (int j = 0; j <= i; j++) {
                    System.out.print(start + " ");
                    start = 1 - start;
                }
                System.out.println();
            }
        }

        public static void pattern12(int n) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    System.out.print(j);
                }
                for (int j = 1; j < 2 * (n - i); j++) {
                    System.out.print(" ");
                }
                for (int j = i; j >= 1; j--) {
                    System.out.print(j);
                }
                System.out.println();
            }
        }

        public static void pattern17(int n) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    System.out.print(" ");
                }
                char ch = 'A';
                int breakpoint = (2 * i + 1) / 2;
                for (int j = 1; j <= 2 * i + 1; j++) {
                    System.out.print(ch);
                    if (j <= breakpoint) {
                        ch++;
                    } else {
                        ch--;
                    }

                }
                for (int j = 0; j < n - i - 1; j++) {
                    System.out.print(" ");
                }
                System.out.println();
            }
        }

        public static void pattern19(int n) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= n - i - 1; j++) {
                    System.out.print("*");
                }
                for (int j = 0; j < 2 * i; j++) {
                    System.out.print(" ");
                }
                for (int j = 0; j <= n - i - 1; j++) {
                    System.out.print("*");
                }
                System.out.println();
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < i + 1; j++) {
                    System.out.print("*");
                }
                for (int j = 0; j < 2 * (n - i - 1); j++) {
                    System.out.print(" ");
                }
                for (int j = 0; j < i + 1; j++) {
                    System.out.print("*");
                }
                System.out.println();
            }

        }

        public static void main(String[] args) {
            int n;
            Scanner sc = new Scanner(System.in);
            n = sc.nextInt();
            pattern19(n);
        }
    }
}
