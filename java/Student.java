import java.util.*;
class Student{
    int id;
    int age;
    String name;
    Student(int id, String name, int age){
        this.id = id;
        this.name = name;
        this.age = age;
    }
    public static void main(String[] args){
        Student s1 = new Student(101,"bac", 20);
        Student s2 = new Student(102,"bad", 21);
        ArrayList<Student> al = new ArrayList<Student>();
        al.add(s1);
        al.add(s2);
        Iterator<Student> itr = al.iterator();
        while(itr.hasNext()){
            Student st = (Student)itr.next();
            System.out.println(""+st.id+st.name+st.age);
        }
        //Using a weird for loop
        for(Student s: al){
            System.out.println(""+s.id+" "+s.name+" "+s.age);
        }
    }
}