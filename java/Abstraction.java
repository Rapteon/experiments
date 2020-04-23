import java.lang.*;
import java.util.Scanner;

abstract class Shape{
    double area;
    abstract void calcArea();
}

class Rectangle extends Shape{
    double length, breadth;
    // double calcArea(){
    //     Scanner myScan = new Scanner(System.in);
    //     System.out.print("Length: ");
    //     length = myScan.nextDouble();
    //     System.out.print("Breadth: ");
    //     breadth = myScan.nextDouble();
    //     myScan.close();
    //     return length*breadth;
    // }
    void calcArea(){
        Scanner myScan = new Scanner(System.in);
        System.out.print("Length: ");
        length = myScan.nextDouble();
        System.out.print("Breadth: ");
        breadth = myScan.nextDouble();
        myScan.close();
        System.out.println(""+length*breadth);
    }
}

class Abstraction{
    public static void main(String[] args){
        Rectangle r = new Rectangle();
        r.calcArea();
    }
}