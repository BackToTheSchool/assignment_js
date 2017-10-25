import java.util.Scanner;

public class hw20 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double tax,countytax;
        tax = 0.0;
        countytax = 0.0;
        System.out.print("What is the order amount ? ");
        double price = scan.nextDouble();
        System.out.print("Which state do you live ? ");
        String state = scan.next();
        if(state.equals("Wisconsin")){
            tax = 0.055*price;
        System.out.print("What county do you live ? ");
        String county1 =scan.next();
        String county2 = scan.nextLine();
        String county = county1 + county2;
        if(county.equals("Eau Claire")){
            countytax = 0.005*price;
        }
        else if(county.equals("Dunn")){
             countytax = 0.004*price;
        }
        System.out.printf("\"The state tax is $%.2f.\"\n\"The county tax is $%.2f.\"\n\"The total tax is $%.2f.\"\n\"The total is $%.2f\"",tax,countytax,(tax+countytax),(price+tax+countytax));
        }
        else if(state.equals("Illinore")){
            tax = 0.08*price;
            System.out.printf("\"The state tax is $%.2f\"\n\"The total is $%.2f\"",tax,price+tax);
        }
        else{
            tax = 0.07*price;
            System.out.printf("\"The total is $%.2f\"",tax+price);
        }
    }
}
