import java.util.Scanner;

public class swapping 
 {

    public static void main(String[] args) {
        int a,b,temp;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter a first number:");
        a=scan.nextInt();
        System.out.println("Enter a second number:");
        b=scan.nextInt();

        temp=a;
        a=b;
        b=temp;

        System.out.println("\n a="+a);
        System.out.println("b ="+b);
        scan.close();
    }

}
