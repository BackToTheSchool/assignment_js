import java.util.Scanner;
//Human class 참조
public class Hw40 {
    public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        System.out.print("Enter a search string : ");
        String name = Scan.nextLine();
        Human Examples = new Human();
        Examples.SeachString(name);
    }

}
