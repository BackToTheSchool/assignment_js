import java.util.Scanner;
import java.text.DecimalFormat;
public class hw7 {
    public static void main(String args[]){
        int length, width,area,a;
        double meters;
        Scanner scan = new Scanner(System.in);
        System.out.print("What is the length of the room in feet? ");
        length = scan.nextInt();
        System.out.print("What is the width of the room in feet? ");
        width = scan.nextInt();
        area = length * width;
        meters = area * 0.09290304;
        DecimalFormat dcm = new DecimalFormat("0.###");


        System.out.print("You entered dimensions " +  length + " feet by " + width +" feet\nThe area is " + area + " square feet and "+ dcm.format(meters) + " square meters" );

    }
}
