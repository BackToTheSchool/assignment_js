import java.util.Scanner;

public class hw26 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the balance : ");
        double balance = scan.nextDouble();
        System.out.print("Enter the APR : ");
        double rate = scan.nextDouble();
        System.out.print("Enter the monthly payment you can make : ");
        double payment = scan.nextDouble();
        hw26 tes = new hw26();
        System.out.print(balance +"\n"+rate+"\n"+payment);
        double result = tes.test(balance,rate,payment);
        System.out.printf("It will take you %.2f months to pay off this card.",result);



    }
    public double test(double balance, double rate, double payment){
        hw26 q = new hw26();
        rate = rate/365/100 + 1;
        double up = balance/payment *(1+Math.pow(rate, 30.0)) + 1;
        double down = rate;
        double result = q.loga(up,down) / 30;
        return result;
    }
    public double loga(double up, double down){
      double result =  Math.log(up)/Math.log(down);
      return result;
    }
}
