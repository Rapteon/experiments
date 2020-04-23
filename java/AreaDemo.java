import java.util.Scanner;

class Shape{
	float length;
	float area(){};
	Scanner sc = new Scanner(System.in);
	Shape(){
		System.out.print("Enter the length: ");
		length = sc.nextFloat();		
	}
	void area(){
		System.out.print("Area = ");
	}
}

class Rectangle{
	float breadth;
	Rectangle(){
		super();
		System.out.print("Enter the breadth: ");
		breadth = sc.nextFloat();
	}
	void area(){
		super.area();
		System.out.println(""+length*breadth);
	}
}

class Square{
	Square(){
		super();
	}
	void area(){
		super.area();
		System.out.println(""+length*length);
	}
}

public class AreaDemo{
	public static void main(String[] args){
		Rectangle r = new Rectangle();
		Square s = new Square();
		r.area();
		s.area();
	}
}
