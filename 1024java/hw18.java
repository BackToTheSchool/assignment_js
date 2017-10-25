import java.util.Scanner;

public class hw18 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String result = "\0";
        System.out.print("Enter C(Celsius) or F(Fahrenheit) to convert temperature");
        String topic = scan.next();
        if (topic.equals("C")) {
            topic = "Fahrenheit";
             result = "Celsius";
        }
        else if (topic.equals("F")) {
            topic = "Celsius";
             result = "Fahrenheit";
        }
        System.out.printf("Enter your temperature in %s : ", topic);
        double tem = scan.nextDouble();
        if (topic.equals("Celsius")) {
            tem = tem * 5 * 9 - 32;
        } else if (topic.equals("Fahrenheit")) {
            tem = (tem - 32) * 5 / 9;
        }
        System.out.printf("The temperature in %s is %.2f",result,tem);
    }
}
