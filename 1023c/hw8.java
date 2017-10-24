import java.util.Scanner;

public class hw8 {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int people, pizza, pieces, leftover, each;
        System.out.print("How many people are there? ");
        people = scan.nextInt();
        System.out.print("How many pizzas are there? ");
        pizza = scan.nextInt();
        System.out.print("How many pieces are in pizza? ");
        pieces = scan.nextInt();
        while(pieces%2 !=0){
            System.out.print("Did you eat some of them? How many pieces are in pizza? ");
            pieces = scan.nextInt();
        }
        leftover = pizza * pieces % people;
        each = pizza * pieces / people;
        System.out.print(people + " people with "+ pizza + " pizzas.\nEach person gets "+ each+ " pieces of pizza.\nThere are "+leftover+" leftover pieces.");
    }
}
