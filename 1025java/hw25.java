import java.util.Scanner;

public class hw25 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter your password : ");
        String word = scan.nextLine();
        hw25 test = new hw25();
        test.testpassword(word);

        }


    void testpassword(String password) {
        int length = password.length();
        int count = 0;
        int digit = 0;
        int alpha = 0;
        while (count < length) {
            char word = password.charAt(count);
            if (Character.isDigit(word)) {
                digit++;
            } else if (Character.isLetter(word)) {
                alpha++;
            }

            count++;
        }
        //if (length < 8) {
            if (alpha == length) {
                System.out.printf("Your password \"%s\" is a weak password.\n", password);
            } else if (digit == length) {
                System.out.printf("Your password \"%s\" is a very weak\n", password);
        }
        //else if (length > 8) {
            else if ((digit + alpha) == length) {
                System.out.printf("Your password \"%s\" is a strong password\n", password);
            } else if ((digit + alpha) != length) {
                System.out.printf("Your password \"%s\" is a very strong password\n", password);
            }
        //}
    }
}