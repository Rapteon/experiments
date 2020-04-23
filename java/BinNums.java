class BinNums{
	//Prepend 0b to represent binary numbers.
	static private int num1 = 0b1001; 
	static private int num2 = 0b0110;
	static int result;

	public static int addNums(){
		return num1+num2;
	}
	public static void main(String[] args){
		System.out.println("Sum = "+BinNums.addNums());
	}
}
