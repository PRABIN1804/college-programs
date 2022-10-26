import java.util.Scanner;

public class find_sum_of_integer 
{
    public static void main(String []args) 
    {
       int x,y,sum;
       Scanner myObj = new Scanner(System.in);
       System.out.println("Enter first number:");
       x = myObj.nextInt();
       System.out.println("Enter second number:");
       y = myObj.nextInt();
        
       sum = x+y;
       System.out.println("Sum of two numbers is:"+sum);
    }
}
