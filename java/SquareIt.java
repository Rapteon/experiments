class SquareIt{
    public static void main(String[] args){
        double sqr = 0;
        if(args.length < 1)
            sqr = 0;
        else
            sqr = Math.pow(Double.parseDouble(args[0]), 2);

        System.out.println("Square = "+sqr);
    }
}