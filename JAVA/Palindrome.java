import java.util.Scanner;

public class Palindrome 
{
    public static void main(String[] args) {
        int num, rev=0,rem,temp;
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter a number:");
        num=scan.nextInt();

        temp=num;
        while (temp!=0)
        {
            rem = temp%10;
            rev = (rev*10)+rem;
            temp = temp/10;
        }
        if(num==rev)
        System.out.println("\n It is palindrome number.");
        else
        System.out.println("\n It is not a palindrome number.");
        scan.close();
    }
}
