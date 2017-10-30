import java.util.Scanner;

public class hw24 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the first word : ");
        String word = scan.next();
        System.out.print("Enter the second word: ");
        String word2 = scan.next();
       char fiResult[] = word.toCharArray();
       char seResult[] = word2.toCharArray();
        if (word.length() == word2.length()) {
            for(int b = 0; b < word.length();b++)
            for (int a = 0; a < word.length(); a++){
                char compare;
                if(fiResult[b] < fiResult[a]){
                    compare = fiResult[b];
                    fiResult[b] = fiResult[a];
                    fiResult[a] = compare;
                }
                if(seResult[b] < seResult[a]){
                    compare = seResult[b];
                    seResult[b]= seResult[a];
                    seResult[a] = compare;
                }
            }
            word = new String(fiResult,0,fiResult.length);
            word2 = new String(seResult,0,seResult.length);

                if (word.equals(word2)) {
                    System.out.print("Two words are same");
                } else
                    System.out.print("Two words are different");

        }
    }
}
