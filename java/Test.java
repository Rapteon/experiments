class Parent{
	int a = 10;
	Parent(){
		System.out.println("Parent class constructor");
	}
	void display(){
		System.out.println("Parent Class Method");
	}
}

class Child extends Parent{
	int a = 20;
	Child(){
		super();	//calls constructor of Parent class
		//The super() constructor must be first called before the statements of the Child() constructor.
	}
	void display(){
		System.out.println("Value of a in parent = " + super.a);
		super.display();
	}
}

public class Test{
	public static void main(String[] args){
		Child t = new Child();
		System.out.println(t.a);
		t.display();
	}
}

//super keyword cannot be used in a static method.
//If a pair of parent and child class have the same variable/method names, then the <super keyword>.<variable/methodname> can be used within the child class to use the parent's member.
//The super and this keyword cannot be used in static contexts.
