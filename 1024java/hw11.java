import java.util.Scanner;

public class hw11 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);

        System.out.print("How many Euros are you exchanging? ");
        double euro = scan.nextDouble();
        System.out.print("What is the exchange rate ? ");
        double rate = scan.nextDouble();
        double ratedo = 1128.66817;
        double result =  euro * rate / ratedo;
        System.out.printf("%.2f euros at an exchange rate of %.2f is $%.2f",euro,rate,result);
    }
}
