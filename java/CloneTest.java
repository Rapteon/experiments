import java.lang.*;
public class CloneTest implements Clonable{
	int a, b;
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
	public static void main(String[] args){
		CloneTest t = new CloneTest();
		t.a = 34;
		t.b = 65;
		CloneTest t2 = (CloneTest)t.clone();
		System.out.println(t2.a);
		System.out.println(t2.b);
	}
}
