import java.util.Scanner;

public class hw15 {
    public static void main(String[] args) {
        String name,password;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter your name : ");
        name = scan.next();
        System.out.print("Enter the password : ");
        password = scan.next();
        if(name.equals("PJS")&&password.equals("123"))
        {
            System.out.print("Welcome");
        }
        else
            System.out.print("Check your password and name");
    }
}
