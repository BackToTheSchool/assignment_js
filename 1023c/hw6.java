import java.util.Scanner;
import java.util.Calendar;
public class hw6 {
    public static void main(String args[]){
        Calendar cal = Calendar.getInstance();
        Scanner scan = new Scanner(System.in);
        int age, year,rest;
        System.out.print("What is your age ?");
        age = scan.nextInt();
        System.out.print("Which age do you want to retire?");
        year = scan.nextInt();
        rest = year - age;
        year = rest + cal.get(Calendar.YEAR);
        System.out.print("You have " + rest +" years.\nIt's "+cal.get(Calendar.YEAR)+" so you can retire at " +year );


    }
}
