class ShapeOverload{
    static float area(){
        return 0;
    }
    static float area(float x){
        return x*x;
    }
    static float area(float x,float y){
        return x*y;
    }
    public static void main(String[] args){
        ShapeOverload s = new ShapeOverload();
        System.out.println(""+s.area(2.0f));        //Not recommended, but allowed. I meant accessing static variables usingobjects.
        System.out.println(""+s.area(2.0f, 3.0f));  // Same as above.
    }
}