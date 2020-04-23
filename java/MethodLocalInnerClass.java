class MethodLocalInnerClass{
	String nameOfDish;
	public void make(){
		class MethodsToCook{
			public boolean fry;
			public boolean bake;
			public boolean freeze;
			public boolean boil;
			void showState(){
				if(fry)
					System.out.println("Fry = "+fry);
				if(bake)
					System.out.println("Bake = "+bake);
				if(freeze)
					System.out.println("Freeze = "+freeze);
				if(boil)
					System.out.println("Boil = "+boil);
			}//showState() ends
		}//class MethodsToCook ends
		MethodsToCook noodles= new MethodsToCook();
		noodles.boil = true;
		noodles.showState();
	}

	public static void main(String[] args){
		MethodLocalInnerClass c = new MethodLocalInnerClass();
		c.make();
	}
}//class MethodLocal... ends
