import java.io.*;
 
class java {
  static int getNoOfWays(int n)
  {
 
 
    if (n <= 2) {
      return n;
    }
    return getNoOfWays(n - 1) + getNoOfWays(n - 2);
  }
 
  public static void main(String[] args)
  {
    System.out.println(getNoOfWays(4));
    System.out.println(getNoOfWays(3));
  }
}
