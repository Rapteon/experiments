import java.applet.*;
import java.awt.*;


//<applet code="labelTest" width=500 height= 500></applet>

public class LabelTest extends Applet{
	public void init(){
		Label l1 = new Label();
		l1.setText("Hello, World !");
		String s1 = l1.getText()+"Something.";
		System.out.println(s1);
		add(l1);
	}
}
