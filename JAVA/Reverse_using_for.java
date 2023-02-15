import java.util.Scanner;

public class Reverse_using_for {
    public static void main(String[] args) {
        System.out.println("Enter The Number:");
        Scanner sc = new Scanner(System.in);
        int Num = sc.nextInt();
        System.out.println("The Entered Number Is" + Num);
        int Reversed = 0;
        for( ;Num != 0; Num /= 10){
            int digit = Num % 10;
            Reversed = Reversed * 10 +digit;
        }
        System.out.println("Reversed Number Is" + Reversed);
        sc.close();
    }
    
}