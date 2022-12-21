import java.util.Scanner;

public class STU_details 
{
    public static void main(String[] args) 
    {
        String Name;
        int Roll_No,Mark;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Name of the student:");
        Name=sc.nextLine();
        System.out.println("Enter the Roll_No of the student:");
        Roll_No=sc.nextInt();
        System.out.println("Enter the Mark of the student:");
        Mark=sc.nextInt();

    System.out.println("Name:" +Name);
    System.out.println("Roll No:" +Roll_No);
    System.out.println("Mark:" +Mark);
    sc.close();    
    }
}
