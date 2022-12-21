import java.util.Scanner;

public class AreaOfRectangle 
{
    public static void main(String[] args) {
        int l,b,A;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the length of the Rectangle:");
        l=sc.nextInt();
        System.out.println("Enter the width of the Rectangle:");
        b=sc.nextInt();
        A=l*b;
        System.out.println("The  area of a Rectangle:" +A);
        sc.close();
        

    }
    
}
