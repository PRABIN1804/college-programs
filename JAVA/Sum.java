// METHOD OVERLOADING

public class Sum {
   public int Sum(int x,int y ) {
    return(x+y);
    
   }
   public double  Sum(double x,double y ) {
    return(x+y);
   }
    public static void main(String[] args) {
        Sum s = new Sum();
        System.out.println(s.Sum(10,20));
        System.out.println(s.Sum(100,200));
    }
}
