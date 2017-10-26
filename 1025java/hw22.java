import java.util.Scanner;

public class hw22 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the first number : ");
        int num1 = scan.nextInt();
        System.out.print("Enter the second number : ");
        int num2 = scan.nextInt();
        System.out.print("Enter the third number : ");
        int num3 = scan.nextInt();
        if(num1 != num2 && num1 != num3 && num2 != num3){
            if(num2 > num1){
                num1 = num2;
            }
            if(num3 > num1){
                num1 = num3;
            }
            System.out.print("The largest number is "+num1);
        }
        else
            System.out.print("Some number is same");
    }
}
