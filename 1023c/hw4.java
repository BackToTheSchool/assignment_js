import java.util.Scanner;

public class hw4 {
    public static void main(String args[]){
        String n, v, a, ad;
        System.out.print("Enter a noun : ");
        Scanner scan = new Scanner(System.in);
        n = scan.nextLine();
        System.out.print("Enter a verb : ");
        v = scan.nextLine();
        System.out.print("Enter an adjective : ");
        a = scan.nextLine();
        System.out.print("Enter an adverb : ");
        ad = scan.nextLine();

        System.out.print("Do you eat "+ a +" "+ n +" that " + ad +" "+ v + "ing?\n Ewww...You're suck.");

    }
}
