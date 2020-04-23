//Program to experiment with Integer wrapper class
import java.io.Console;

class IntWrap{
    public static void main(String[] args){
        int i;
        double d;

        i = 10;
        d = 5.0;

        Integer j = new Integer(i);
        Double k = new Double(d);

        System.out.println("j = "+j.toString()+"; k = "+k.toString());
    }
}