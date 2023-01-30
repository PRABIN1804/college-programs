import java.util.Scanner;

public class Reverse_using_Recursion {
    public static void ReverseNumber(int Num) {
       if(Num<10){
        System.out.println(Num);
        return;
       } 
       else{
        System.out.println(Num%10);
        ReverseNumber(Num/10);
       }
    }

    public static void main(String[] args) {
      System.out.println("Enter The Number:");
      Scanner sc= new Scanner(System.in);
      int Num = sc.nextInt();
      System.out.println("The Reverse Number is:");
      ReverseNumber(Num);
      sc.close();
    }
}
