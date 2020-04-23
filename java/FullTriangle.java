import java.io.Console;

class FullTriangle{
    public static void main(String[] args){
        int maxLines; //Prints a pyramid with height 'maxLines-1'
        Console c = System.console();

        System.out.print("maxLines: ");
        maxLines = Integer.parseInt(c.readLine());

        for(int i = 0; i < maxLines; i++){
            for(int j = maxLines-i; j >= 0; j--)        //This is for printing spaces before each line of the pyramid.
                System.out.print(" ");
            for(int k = 0;k < i; k++)                   //Prints the left half-pyramid.
                System.out.print("*");
            for(int k = 1; k < i; k++)                  //Prints the right half-pyramid.
                System.out.print("*");
            System.out.println("");                     //Moves to the next line of the pyramid.
        }
    }
}