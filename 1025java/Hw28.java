import java.util.Scanner;

public class Hw28 {
    //숫자를 입력받아서 합치세요.
    Scanner scan = new Scanner(System.in);

    public static void main(String[] args) {
        Hw28 Number = new Hw28();
        int[] num = new int[5];
        num = Number.SetNum(num);
        int result = Number.SumNum(num,5);
        System.out.print("The result = "+result);
    }

    public int[] SetNum(int[] num) {
        int count = 0;
        for (count = 0; count < 5; count++) {
            System.out.print("Enter the number : ");
            num[count] = scan.nextInt();
        }
        return num;
    }
    public int SumNum(int[] num,int length){
        int result = 0;
        for(int count = 0;count < length ; count++){
             result = result + num[count];
        }
        return result;
    }
}
