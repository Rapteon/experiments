//Program to test Run-Time Polymorphism with upcasted variables.

class Wave{
    static int objs = 0;
    Wave(){
        objs++;
    }
    void print(){
        System.out.println("A wave.");
        System.out.println("Num: "+objs);
    }
}

class Light extends Wave{
    static int objs = 0;
    Light(){
        objs++;
    }
    //Overriding the 'print()' in parent 'Wave'.
    void print(){
        System.out.println("A light wave.");
        System.out.println("Num: "+objs);
    }
}

class Sound extends Wave{
    static int objs = 0;
    
    Sound(){
        objs++;
    }
    //Overriding the 'print()' in parent 'Wave'.
    void print(){
        System.out.println("A sound wave.");
        System.out.println("Num: "+objs);
    }
}

class NeedleCast{
    public static void main(String[] args){
        Wave w = new Wave();
        w.print();
        w = new Light();
        w.print();
        w = new Sound();
        w.print();

        Light l = new Light();
        l.print();
        Sound s = new Sound();
        s.print();

        /*
            The Wave class object can be assigned the reference of any of its child classes.
            In method overriding, the dynamic displatch mechanism of Java determines the
            method to call based on the reference of the object which calls the method.
            In the first case, the reference stored in object 'w' of the 'Wave' class
            is that of the object of its own class, hence using the method of its own.
            In other cases, the reference assigned is that of the child class,
            so the method of the child is called, resulting in method overriding not
            functioning as expected.
        */
    }
}