import java.util.Scanner;
//72를 연이율로 나누는데 연이율이 숫자가 아니면 다시 받아보세요
public class Hw29 {


    public static void main(String[] args) {

            Calculate();
        }
    public static void Calculate(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the rate : ");
        String rate = scan.next();
        long year = 0;
        try {
            double result = Double.parseDouble(rate);
            year = Math.round(72 / result);
            System.out.print("You need "+year+" years.");
        }
        catch(NumberFormatException error){
            System.out.print("Please enter the number.\n");
            Calculate();
        }
    }
    }


