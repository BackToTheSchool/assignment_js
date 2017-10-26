import java.util.Scanner;

public class hw21 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numb;
        //String calendar[] = {" ","January","February","March","April","May","June","July","August","September","October","November","December"};
        String calendar;
        System.out.print("Please enter the number of the month : ");
        int num = scan.nextInt();
        hw21 test = new hw21();
        calendar = test.cal(num);
        System.out.printf("The name of the month is %s",calendar);
    }
    public String cal(int num){
        String calendar;
        switch(num){
            case 1 : calendar = "January";
                break;
            case 2 : calendar = "Feburary";
                break;
            case 3 : calendar = "March";
                break;
            case 4 : calendar = "April";
                break;
            case 5 : calendar = "May";
                break;
            case 6 : calendar = "June";
                break;
            case 7 : calendar = "July";
                break;
            case 8 : calendar = "August";
                break;
            case 9 : calendar = "September";
                break;
            case 10 : calendar = "October";
                break;
            case 11 : calendar = "November";
                break;
            case 12 : calendar = "December";
                break;
            default : calendar = "none. Please enter the number correctly";
                break;
        }
        return calendar ;

    }
}
