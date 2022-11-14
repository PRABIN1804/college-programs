import java.util.Scanner;

public class find_sum_of_integer 
{
    public static void main(String []args) 
    {
       int x,y,sum;
       Scanner myobj = new Scanner(System.in);
       System.out.println("Enter first number:");
       x = myobj.nextInt();
       System.out.println("Enter second number:");
       y = myobj.nextInt();
        
       sum = x+y;
       System.out.println("Sum of two numbers is:"+sum);
       myobj.close();
    }
}
