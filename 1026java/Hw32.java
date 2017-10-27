import java.util.Random;
import java.util.Scanner;

public class Hw32 {

    public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        NumberGame();
    }
    public static void NumberGame(){
        Scanner Scan = new Scanner(System.in);
        Random Guess = new Random();
        System.out.print("Let's play Guess the number\nPick a difficulty level : ");
        int level = Scan.nextInt();
        int result = 0;
        int answer = 0;
        if(level == 1){
            result = 1 + Guess.nextInt(10);
        }
        else if(level == 2){
            result = 1 + Guess.nextInt(100);
        }
        else{
            result = 1+ Guess.nextInt(1000);
        }
        do {
            System.out.print("Enter the number : ");
            answer = Scan.nextInt();
            if(answer < result){
                System.out.print("Your number is low.\n");
            }
            else if(answer > result)
                System.out.print("Your number is high.\n");
            else{
                System.out.print("Your number is correct\n");
                break;
            }

            }while(answer != result);
        System.out.print("Do you want try again? press r");
        String play = Scan.next();
        if(play.equals("r")){
            NumberGame();
        }
    }
}
