import java.util.Scanner;

public class hw17 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Are you male or female ? ");
        String sex = scan.next();
        System.out.print("How weigh are you ? ");
        double weight = scan.nextDouble();
        System.out.print("When did you drink ? ex 1 hour ago");
        int time = scan.nextInt();
        System.out.print("How much did you drink ? ");
        double glass = scan.nextDouble();
        hw17 test = new hw17();
        double result = test.drink(sex,weight,time,glass);

            System.out.printf("Your BAC is %.2f.",result);
            if(result >= 0.08){
                System.out.print("You can't drive.");
            }
            else{
                System.out.print("You can drive.");
            }


    }
    public double drink(String sex,double weight, int time, double glass){
            double result = 0.0;
        if(sex.equals("male")){
           result = (glass *5.14)/(0.73*weight)-(0.015*time);

        }
        else if(sex.equals("female")){
             result = (glass*5.14)/(0.6*weight)-(0.015*time);

        }
        return result;

    }
}
