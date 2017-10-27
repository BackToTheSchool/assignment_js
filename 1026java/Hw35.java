import java.util.ArrayList;
import java.util.Scanner;
import java.util.Random;
public class Hw35 {
    public static void main(String[] args) {
        Hw35 ArrayMaker = new Hw35();
        ArrayList Player = new ArrayList();
        Player = ArrayMaker.MakeArray(Player);
        Random Winner = new Random();
        int winner = Winner.nextInt(Player.size());
        System.out.print("Winner is "+Player.get(winner));
    }
    public ArrayList MakeArray(ArrayList Examples){
        Scanner Scan = new Scanner(System.in);
        System.out.print("Enter the players name : ");
        String nameofPlayer = Scan.next();
        while(!nameofPlayer.equals("quit")){
            System.out.print("If you want to finish press \"quit\".\nEnter the players name : ");
            Examples.add(nameofPlayer);
            nameofPlayer = Scan.next();
        }
        return Examples;
    }
}
