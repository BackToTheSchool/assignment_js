import java.util.Random;
import java.util.Scanner;

public class Hw37 {
    public static void main(String[] args) {
        Hw37 PasswordMaker = new Hw37();
        Scanner Scan = new Scanner(System.in);
        System.out.print("What's the minimum length ? ");
        int length = Scan.nextInt();
        System.out.print("How many special characters ? ");
        int special = Scan.nextInt();
        System.out.print("How many numbers ? ");
        int numbers = Scan.nextInt();
        String password = PasswordMaker.MakePassword(length,special,numbers);
        System.out.printf("Your password is %s",password);
    }
    public String MakePassword(int length, int special,int number){//비밀번호 만들기
        Random getPassword = new Random();
        String[] specialChar = {"!","@","#","$"};
        String[] pwChar = {"a","b","c","d"};
        int count = 0;
        String[] Password = new String[30];
        //
            for(;count < special;count++){
                Password[count] = specialChar[getPassword.nextInt(4)];
            }
            for(;count < number+special ; count ++){

                Password[count] = Integer.toString(getPassword.nextInt(10));
            }

        while(count > length){
            length = length +3;
        }
        for( ; count < length  ;count++){
            Password[count] = pwChar[getPassword.nextInt(4)];
        }
        String password = "\0";
        for(length = 0; length < count ; length++){
           password = password+Password[length];
        }


        return password;

    }
}
