class Static{
	static int num1 = 10;
	int num2 = 20;
	
	static void printOne(){
		System.out.println("num1 = "+num1);
//		System.out.println("num2 = "+num2);
//		The above statement is commented out because a non-static member cannot be accessed inside a static member function.
	}

	void display(){
		System.out.println("num1 = "+num1);
		System.out.println("num2 = "+num2);
		//Both static as well as non-static members can be accessed within a non-static member function.
	}

	//static{
	//	System.out.println("Within static block");
		//This block will be executed when the first static member is accessed.
	//}

	public static void main(String[] args){
		System.out.println("Within main.");
		//The line below is executed when memory is allocated for the class.
		StaticHelperClass c = new StaticHelperClass();
		c.displayDemo();
		Static d = new Static();
		printOne();
	}
}
