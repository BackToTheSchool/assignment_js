import java.util.Scanner;
//nextInt를 사용하고 난 후 개행문자가 Scanner에 남아있기 떄문에 다음 nextLine함수가 잘 안될 수 있습니다.
public class hw14 {
    public static void main(String[] args) {
          double tax;
          String state;
        Scanner scan = new Scanner(System.in);
        System.out.print("What is the order amount ? ");
        double amount = scan.nextDouble();

        System.out.print("What is the state ? ");
        state = scan.next();

        if(state.equals("wi"))
        {
          tax = 0.055*amount;
            System.out.printf("The subtotal is $%.2f\nThe tax is $%.2f\nThe total is $%.2f",amount,tax,amount+tax);
        }
        if(!state.equals("wi"))
        {
            tax = 0.05*amount;
            System.out.printf("The subtotal is $%.2f\nThe total is $%.2f",amount,amount+tax);
        }

    }
}
