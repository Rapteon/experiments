//Program to understand generic types in Java

//Class not using Generic Types
// class Box{
//     private Object o;
//     Box(Object o){
//         this.o = o;
//     }

//     Object getObject(){
//         return o;
//     }
//     void setObject(Object o){
//         this.o = o;
//     }
// }

//'T' is any type variable. It can be any class type, interface type, array type or even another variable.
class Box<T>{
    private T obj;
    Box(T obj){
        this.obj = obj;
    }
    T getT(){
        return obj;
    }
    void setT(T obj){
        this.obj = obj;
    }
}

class GenericDemo{
    public static void main(String[] args){
        Box<Integer> b = new Box<Integer>(10);
        System.out.println(""+b.getT1());
    }
}