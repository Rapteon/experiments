class StaticDemo{
    final static int var;
    int normal_var;
    StaticDemo(){
        normal_var = 10;
    }
    static{
        var = 15;
        System.out.println(""+var);
    }
    public static void main(String[] args){
        StaticDemo d = new StaticDemo();
        System.out.println(""+d.normal_var);
    }
}