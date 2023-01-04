import java.util.Scanner;
public class LeapYear {

  public static boolean isLeapYear (int y) {
    if ((y%4==0 && y%100!=0)|| y%400==0)
    return true;
    else
    return false; 
  }
  public static void main(String[] args) {
    Scanner in=new Scanner(System.in);
    System.out.println("Enter a year:");
    int year=in.nextInt();

    if (isLeapYear(year))
      System.out.println("This  is a leap year.");
    else
      System.out.println( "This is not a leap year.");
      in.close();
  }
}

