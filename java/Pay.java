abstract class Pay{
	abstract void pay();
	void print(){
		System.out.println("Hello");
	}
}

class Derived extends Pay{
	void pay(){
		System.out.println("I'll pay.");
	}
	public static void main(String[] args){
		Pay p = new Derived();
		p.pay();
		p.print();
	}
}

