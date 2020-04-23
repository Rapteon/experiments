import java.io.Console;
import java.util.*;
import java.lang.*;

class Smith implements Cloneable{
    String name;
    Smith(String nam){
        name = nam;
    }
    Smith(){
        ;
    }
    public Object clone() throws CloneNotSupportedException{
        return super.clone();
    }
}

class TheMatrix{
    ArrayList<Smith> s;
    static int smithCount = 0;
    TheMatrix(){
        s = new ArrayList<Smith>(1);
        String smithName = ""+smithCount;
        Smith one = new Smith(smithName);
        s.add(one);
        smithCount++;
    }
    void makeASmith(){
        Smith sm = new Smith(""+smithCount);
        s.add(sm);
    }
    void makeASmith(String st){
        Smith sm = new Smith(st);
        s.add(sm);
    }
    void makeASmith(Smith t){
        Smith sm  = new Smith();
        sm.name = t.name;
    }
    void displaySmiths(){
        for(Smith k : s){
            System.out.println("Name: "+k.name);
        }
    }
    public static void main(String[] args){
        TheMatrix m = new TheMatrix();
        m.makeASmith();
        Smith fre = new Smith("theFreeSmith");
        m.makeASmith(fre);
        try{
            Smith newer = (Smith)fre.clone();
        }
        catch(Exception e){
            e.printStackTrace();
        }
        m.makeASmith("HyperSmith");
        m.displaySmiths();
    }
}