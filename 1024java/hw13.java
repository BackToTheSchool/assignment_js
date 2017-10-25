import java.util.Scanner;

public class hw13 {
    public static void main(String[] args) {
        System.out.print("What is the principal of the amount ? ");
        Scanner scan = new Scanner(System.in);
        double principal = scan.nextDouble();
        System.out.print("What is the rate ? ");
        double rate = scan.nextDouble();
        System.out.print("What is the number of the year ? ");
        int year = scan.nextInt();
        System.out.print("How mnay time is the interest compounded ? ");
        int time = scan.nextInt();
        double result = principal * Math.pow(Math.pow((1+((rate/100)/time)),time),year) ;
        System.out.printf("$%.2f invested at %.2f%% for %d years compounded %d  times per years is $%.2f",principal,rate,year,time,result);
    }
}
