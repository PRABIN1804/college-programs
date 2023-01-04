import java.util.Scanner;
public class LCM {
        public static void main(String[] args) {
      int n1,n2,lcm;
          Scanner sc= new Scanner(System.in);
            System.out.println("Enter the 1st number");
            n1=sc.nextInt();
            System.out.println("Enter a  2nd number");
            n2=sc.nextInt();
           lcm = (n1 > n2) ? n1 : n2;
          while(true) {
            if( lcm % n1 == 0 && lcm % n2 == 0 ) {
              System.out.printf("The LCM of %d and %d is %d.", n1, n2, lcm);
              break;
            }
            ++lcm;
          }
          sc.close();
        }
      }
