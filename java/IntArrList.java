import java.util.*;

class IntArrList{
    static void display(ArrayList<Integer> list){
        //Printing using a weird for loop
        for(Integer i: list){
            System.out.println(""+i);
        }
    }
    
    public static void main(String[] args){
        ArrayList<Integer> list = new ArrayList<Integer>(10);   //10 = capacity of element
        int arry[] = {4,45,13,44,99};
        int pos = 0;
        Scanner sc = new Scanner(System.in);
        //Inserts elements to the arraylist.
        for(int i = 0; i < arry.length; i++){
            list.add(arry[i]);
        }
        
        
        System.out.println("Removing 4");
        list.remove(list.indexOf(4));

        display(list);
        System.out.println("Removing 44");
        list.remove(list.indexOf(44));
        display(list);

        System.out.println("Inserting 45 at index 0...");
        list.add(0,45);
        display(list);

        System.out.println("Copying elements...\nto arraylist 'arrLis'");
        ArrayList<Integer> arrLis = new ArrayList<Integer>();
        arrLis.addAll(list);
        System.out.println("This is 'arrLis'");
        display(arrLis);

        System.out.println("Position to place the new list into the first?: ");
        pos = sc.nextInt();
        list.addAll(pos, arrLis);
        display(list);

        list.remove(3);
        display(list);

        //The sublist(int start, int end) returns a sublist from the given ArrayList.

        ArrayList<Integer> subs = new ArrayList<Integer>(list.subList(3, 7));
        System.out.println("Sublist: ");
        display(subs);

        System.out.println("The first occurence of 13 is at: "+list.indexOf(13));

        System.out.println("GEtting elements from the arrayList 'subs'...");
        for(Integer i:subs){
            System.out.println("The index of "+i+" is "+subs.indexOf(i));
        }

        list.set(3, 100);   //(index,element)
        display(list);
    }
}