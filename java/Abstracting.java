import java.util.Scanner;

abstract class Simple{
    abstract void dispOne();
    abstract void dispTwo();
    abstract void dispThree();
    void actualPrint(){
        System.out.println("So la la !");
    }
}
class Abstracting extends Simple{
    void dispOne(){
        System.out.println("In abstracting.");
    }
    void dispTwo(){
        System.out.println("In abstracting.");
    }
    void dispThree(){
        System.out.println("In abstracting.");
        super.actualPrint();
    }
    public static void main(String[] args){
        Abstracting a = new Abstracting();
        a.dispOne();
        a.dispTwo();
        a.dispThree();
        
    }
}