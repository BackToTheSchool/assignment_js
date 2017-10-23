import java.util.Scanner;

public class hw3 {
    public static void main(String args[]){
        String quote, name;
        System.out.print("What is the quote? ");
        Scanner scan = new Scanner(System.in);
        quote = scan.nextLine();
        System.out.print("Who said that?");
        name = scan.nextLine();

        System.out.print(name + " said, \"" + quote + "\"");
    }
}
