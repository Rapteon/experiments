class Commands{
    public static void main(String[] args){
        float sum = 0;

        for(int i = 0;i < args.length; sum+=Float.parseFloat(args[i++]));

        System.out.println("Sum = "+sum);
    }
}