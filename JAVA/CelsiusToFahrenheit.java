import java.util.Scanner;

public class CelsiusToFahrenheit 
{
    public static void main(String[] args) {
        int C;
        double F;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the Celsius:");
        C=sc.nextInt();
        F=(C*1.8)+32;
        System.out.println("Fahrenheit of the celsius is:" +F);
        sc.close();
    }
    
}
