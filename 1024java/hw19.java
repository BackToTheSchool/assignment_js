import java.util.Scanner;

public class hw19 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter your weight : ");
        double weight = scan.nextDouble();
        System.out.print("Enter your height : ");
        double height = scan.nextDouble()/100;
        double bmi = weight / Math.pow(height,2.0) ;
        if(bmi > 25){
            System.out.printf("Your BMI is %.2f. You are overweight.\nSee your doctor",bmi);
        }
        else if(bmi < 18.5){
            System.out.printf("Your BMI is %.2f. You are too skinny.\nSee your doctor",bmi);
        }
        else{
            System.out.printf("Your BMI is %.2f. You are fine.\n",bmi);
        }
    }
}
