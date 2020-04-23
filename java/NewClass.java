class Bike{
	final int speed = 90;
	Bike(){
		speed = 100;
	}

	void run(){
		//speed = 140;
	}
}

class NewClass{
	public static void main(String[] args){
		Bike b = new Bike();
		b.run();
	}
}
