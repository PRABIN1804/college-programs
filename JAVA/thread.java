class thre extends Thread{
    public void run(){
        while(true){
            System.out.println("jhfgkjb");
        }
       
    }
}
class thre1 extends Thread{
    public void run(){
        while(true){
            System.out.println("....................fgkjb");
        }
        
    }
}
public class thread {
    public static void main(String[] args) {
        thre t1=new thre();
        thre1 t2=new thre1();
        t1.start();
        t2.start();
        
    }    
}
