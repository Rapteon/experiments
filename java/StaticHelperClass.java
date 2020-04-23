class StaticHelperClass{
	static int myNum = 90;
	//The block below will be executed when memory is allocated for the class. According to the Java Docs, if the program contains one or more static bloks, then they are executed in the order in which they are encountered.
	static{
		System.out.println("Within Static Block of StaticHelper.");
	}
	void displayDemo(){
		System.out.println("myNum = "+myNum);
	}
}
