import java.util.Scanner;

public class Factorial {

    public static void main(String []args)
    {
        int  factorial=1;
        int i;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = sc.nextInt();
        for(i = 1; i <= num; ++i)
        {
            factorial *=i;
        }

        System.out.println("factorial of " +num+ " is "  +factorial);
        sc.close();
    }
}