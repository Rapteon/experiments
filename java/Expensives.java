//Question from Java Quiz

class Expensives{
    public static void main(String[] args){
        String textBook = "500";
        Short allInOne = new Short(textBook);
        Short xerox = Short.parseShort(textBook);
        short travel = Short.parseShort(textBook,2);
        System.out.println(textBook + ""+allInOne+""+xerox+""+travel);
    }
}