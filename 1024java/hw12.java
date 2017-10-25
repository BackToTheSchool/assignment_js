import java.util.Scanner;

public class hw12 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the principal : ");
        double principal = scan.nextDouble();
        System.out.print("Enter the rate of the interest : ");
        double interest = scan.nextDouble();
        System.out.print("Enter the number of the years : ");
        int years = scan.nextInt();
        principal = principal * (1+(years *interest/100));
        principal = Math.round(principal * 100) / 100;
        System.out.print("After "+years+" years at "+interest +"%, the investment will be worth $"+principal);
    }
}
