import java.util.Scanner;

public class hw5 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        String fn,sn; int f,n,p,m,b,d;
        System.out.print("What is first number? ");
        fn = scan.nextLine();
        System.out.print("What is second number?");
        sn = scan.nextLine();
        f = Integer.valueOf(fn);
        n = Integer.valueOf(sn);
        p = f + n ;
        m = f - n; b = f * n; d = f / n;
        System.out.print(f + " + " + n + " = " + p + "\n" + f + " - " + n + " = " + m + "\n" + f + " * " + n + " = " + b + "\n" + f + " / " + n + " = "+ d );

    }
}
