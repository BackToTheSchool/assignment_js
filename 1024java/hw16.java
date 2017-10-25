import java.util.Scanner;

public class hw16 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("How old are you ? ");
        int age = scan.nextInt();
        if(age >= 16){
            System.out.print("You are old enough to drive");
        }
        else{
            System.out.print("You can't drive wait for "+ (16-age) +" year");
        }
    }

}
