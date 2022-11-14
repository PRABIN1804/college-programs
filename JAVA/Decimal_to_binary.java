 import java.util.Scanner;

 public class Decimal_to_binary 
 {
     public static void main(String []args ) 
     {
     int decimal, i=0;
     int[] binary = new int [20];
     Scanner sc = new Scanner(System.in);

      System.out.println("Enter the decimal number:");
      decimal = sc.nextInt();
       while(decimal != 0)
       {
         binary[i] = decimal%2;
         i++;
         decimal = decimal/2;
       }
        System.out.println("\nEquivalent Binary Value =");
        for(i=(i-1); i>=0; i--)
        System.out.println(binary[i]);
        sc.close();
 }

}

