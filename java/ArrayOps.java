import java.util.Scanner;
class ArrayOps{
    static Scanner sc = new Scanner(System.in);

    static void insertAtPos(int[] array, int pos, int value){
        int positionToInsertAt, temp, temp2;
        
        for(positionToInsertAt = 0; positionToInsertAt < pos-1; positionToInsertAt++);

        temp = array[pos];
        array[pos] = value;

        positionToInsertAt++;
        for(int i = positionToInsertAt; i < array.length; i++){
            temp2 = array[i];
            array[i] = temp;
            temp = temp2;
        }
        array[array.length-1] = temp;

    }
    static void printArray(int[] array){
        System.out.print("|");
        
        for(int i = 0; i < array.length; i++)
            System.out.printf("%d|", array[i]);
        
        System.out.println("");
    }

    static void storeArray(int[] array){
        for(int i = 0;i < array.length; i++){
            System.out.printf("Element:%d: ", i);
            array[i] = sc.nextInt();
        }
    }

    public static void main(String[] args){
        int[] smallArray;
        int length, pos, element;

        System.out.print("Length: ");
        length = sc.nextInt();

        smallArray = new int[length];

        storeArray(smallArray);
        printArray(smallArray);

        System.out.print("Position to Insert: ");
        pos = sc.nextInt();
        System.out.print("Element to Insert: ");
        element = sc.nextInt();

        insertAtPos(smallArray, pos, element);

        printArray(smallArray);

    }
}