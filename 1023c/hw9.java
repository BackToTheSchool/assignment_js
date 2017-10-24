
import java.util.Scanner;
        import java.math.*;
public class hw9{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.print("How many square meters do you want to paint? ");
        int area = scan.nextInt();
        float paint = area / (float) 9;
        int result = (int) Math.ceil(paint);
        System.out.print("You will need to purchase "+result + " of paint to cover "+ area +" square meters.");
    }
}
