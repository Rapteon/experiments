//Programto show method overloading

class Overload{
    void print(){
        System.out.println("Nothing.");
    }
    void print(int b){
        System.out.println(""+b);
    }

    void getSomething(){
        System.out.println("Nothing to get.");
    }
    void getSomething(int s){
        s*=s;
        System.out.println(""+s);
    }

    public static void main(String[] args){
        Overload b = new Overload();
        b.print();
        b.print(2);
        b.getSomething();
        b.getSomething(4);
    }
}