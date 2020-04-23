class Employee{
	String name;
	String address;
	int age;
	String gender;

	Employee(String name, String address, int age, String gender){
		this.name = name;
		this.address = address;
		this.age = age;
		this.gender = gender;
	}
	void display(){
		System.out.println("Name: "+name);
		System.out.println("Address: "+address);
		System.out.println("Age: "+age);
		System.out.println("Gender: "+gender);
	}
	/*
	public static void main(String[] args){
		Employee e = new Employee("Suraj","Pashan", 20, "Male");
		e.display();		
	}
	*/
}

class FullTimeEmployee extends Employee{
	float salary;
	String designation;

	FullTimeEmployee(String name, String address, int age, String gender, float salary, String designation){
		super(name, address, age, gender);
		this.salary = salary;
		this.designation = designation;
	}
	void display(){
		super.display();
		System.out.println("Salary: "+salary);
		System.out.println("Designation: "+designation);
	}

	/*
	public static void main(String[] args){
		FullTimeEmployee e = new FullTimeEmployee("Suraj", "Pashan", 20, "Male", 120000, "None");
		e.display();
	}
	*/
}

class PartTimeEmployee extends Employee{
	int working_hours;
	float rate_per_hour;
	PartTimeEmployee(String name, String address, int age, String gender, int working_hours, float rate_per_hour){
		super(name, address, age, gender);
		this.working_hours = working_hours;
		this.rate_per_hour = rate_per_hour;
	}
	void display(){
		super.display();
		System.out.println("Payable: "+working_hours*rate_per_hour);
	}
	
	/*
	public static void main(String[] args){
		PartTimeEmployee e = new PartTimeEmployee("Suraj", "Pashan", 20, "Male", 8, 3000);
		e.display();
	}
	*/
}

class EmployeeDemo{
	public static void main(String[] args){
		Employee m1 = new Employee("Suraj", "Pune", 20, "Male");
		FullTimeEmployee m2 = new FullTimeEmployee("Channel Catfish", "Fresh Water", 15, "Male", 120000, "Chief Strategizer");
		PartTimeEmployee m3 = new PartTimeEmployee("Indian Flying Fox", "Indian Subcontinent", 31, "Female", 5, 3000);

		m1.display();
		m2.display();
		m3.display();
	}
}
