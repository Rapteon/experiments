import java.io.Console;

//Program to show the usage of Unicode Symbols.

class UnicodePrint{
    public static void main(String[] args){
        char copyright_symbol = '\u00A9';
        char multipl_symbol = '\u00D7';
        char rupee_symbol  = '\u20B9';
        String name = "Suraj Naranatt";
        int num1, num2;
        Console myCons = System.console();

        System.out.printf("%s%c\n",name, copyright_symbol);
        System.out.print("Num1: ");
        num1 = Integer.parseInt(myCons.readLine());
        System.out.print("Num2: ");
        num2 = Integer.parseInt(myCons.readLine());
        
        System.out.printf("%d %c %d = %d\n", num1, multipl_symbol, num2, num1*num2);
        System.out.println(""+rupee_symbol);
    }
}