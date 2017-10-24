import java.util.Scanner;
public class hw10 {
    public static void main(String args[]){
        hw10 method = new hw10();
        int count,price;
        double tax,result;
        Scanner scan = new Scanner(System.in);
        System.out.print("How many items do you have?");
        count = scan.nextInt();
        price = method.price(count);
        tax = price * 0.055;
        result = price + tax;
        System.out.print("Subtotal : $"+ price +"\nTax : $"+tax+"\nTotal : $"+result);
    }
    public int price(int count){
        int price, a,quantity,result;
        Scanner scan = new Scanner(System.in);
        result = 0; a = 1;
        while(count > 0)
        {
            System.out.print("How much is Item "+a+" : " );
            price = scan.nextInt();
            System.out.print("How many "+a+" Itmes are there? ");
            quantity = scan.nextInt();
            a++;
            result = result + price * quantity;
            count--;
        }

        return result;
    }
}