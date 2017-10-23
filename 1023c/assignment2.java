
import java.util.Scanner;

public class assignment2 {
    public static void main(String[] args) {
        String name;
        Scanner scan = new Scanner(System.in);
        System.out.println("Put your string\n");
        name = scan.nextLine();
        while(name == "\n") {
            System.out.println("Put your string\n");
            name = scan.nextLine();
        }

    }

}