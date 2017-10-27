import java.util.Random;
import java.util.Scanner;

public class Hw33 {
    public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        System.out.print("What is the question ? \n");
            Scan.next();
            Pseudo();
    }
    public static void Pseudo(){
        String[] answer = {"Yes","No","Maybe","Ask me later"};
        Random Guess = new Random();
        int number = Guess.nextInt(4);
        System.out.print(answer[number]);
    }
}
