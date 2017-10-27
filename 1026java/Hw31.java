import java.util.Scanner;

public class Hw31 {
    //심박수를 구해 보자
    public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        System.out.print("Enter your Age : ");
        int age = Scan.nextInt();
        System.out.print("Enter your Resting pulse : ");
        int pulse = Scan.nextInt();
        Show(age,pulse);

    }
    public static void Show(int age, int pulse){
        int intensity = 55;
        System.out.print("Intensity\t\t|Rate\n");
        System.out.print("----------------|----\n");
        for(intensity = 55; intensity < 96 ;intensity = intensity +5){
        int result = (((220 - age)-pulse)*intensity/100)+pulse;
        System.out.print(intensity+"%%\t\t\t| "+result+"bpm\n");
        }
    }
}
