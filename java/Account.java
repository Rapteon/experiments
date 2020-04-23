import java.util.Scanner;

class Account{
	String cust_name;
	Scanner sc = new Scanner(System.in);
	long acc_number;
	void getData(String name, long accNum){
		cust_name = name;
		acc_number = accNum;
	}
	void putData(){
		System.out.println("Customer Name: "+cust_name);
		System.out.println("Account Number: "+acc_number);
	}
	public static void main(String[] args){
		AccountDetails s = new AccountDetails();
		s.getData("Suraj", 123456710, 10000, 20000, 30000);
		s.putData();
		
		int choice;
		long amount;
		Scanner sc = new Scanner(System.in);

		while(true){
			System.out.println("Options: ");
			System.out.println("1\tWithdraw");
			System.out.println("2\tDeposit");
			System.out.print("[1/2]?\n: ");
		
			choice = sc.nextInt();
			switch(choice){
				case 1: System.out.print("Amount to Withdraw: ");
					amount = sc.nextLong();
					s.withdrawAmount(amount);
					s.putData();
					break;
				case 2: System.out.println("Amount to Deposit: ");
					amount = sc.nextLong();
					s.depositAmount(amount);
					s.putData();
					break;
				default:System.out.println("Invalid ption selected.");
			}
			System.out.print("Continue?[Y/n]: ");
			String o = sc.next();
			if(o.equals("n")){
				break;
			}
		}
	}
}

class SavingsAccount extends Account{
	long minBalance;
	long savingsBalance;

	void getData(String nam, long accNum, long min_bal, long savings_bal){
		super.getData(nam, accNum);
		minBalance = min_bal;
		savingsBalance = savings_bal;	
	}
	void putData(){
		super.putData();
		System.out.println("Minimum Balance: "+minBalance);
		System.out.println("Savings Balance: "+savingsBalance);
	}
}

class AccountDetails extends SavingsAccount{
	long deposits;

	void getData(String nam, long accNum, long min_bal, long savings_bal, long depos){
		super.getData(nam, accNum, min_bal, savings_bal);
		deposits = depos;
	}
	void putData(){
		super.putData();
		System.out.println("Deposits = "+ deposits);
	}
	void withdrawAmount(long withd){
		savingsBalance -= withd;	
	}
	void depositAmount(long depos){
		deposits += depos;
	}
}
