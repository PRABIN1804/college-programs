import java.util.Scanner;

public class Armstrong 
{
    public static void main(String[] args) 
    {
        int a,temp,rem,result=0;
        
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a number:");
        a=scan.nextInt();
        temp=a;
        while(temp!=0)
        {
            rem=temp%10;
            result += Math.pow(rem,3);
            temp/=10;
        }
        if(result==a)
        System.out.println(a + "is an armstrong number.");
        else
        System.out.println(a+"is not a armstrong numbver.");
    }
}
