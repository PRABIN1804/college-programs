import java.util.Scanner;

public class multifloatnumbers
{
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("enter first floating point numbers: ");
        float flt1=sc.nextFloat();

        System.out.println("enter second floating point numbers");
        float flt2 = sc.nextFloat();

        float product = flt1*flt2;
        System.out.println("Product of given floating point numbers::" + product);


    }
}