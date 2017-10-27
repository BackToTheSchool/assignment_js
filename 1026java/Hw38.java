import java.util.ArrayList;
import java.util.Scanner;

public class Hw38 {
    public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        ArrayList Input = new ArrayList();
        String data;
        Hw38 Filter = new Hw38();
        String[] inputData= new String[100];
        System.out.print("Enter a list of numbers. Separated by spaces. : ");
        data = Scan.nextLine();
        int length =  (data.length()+1) / 2 ;
        for(int count = 0; count < length ;count++){
            inputData = data.split(" ");
           Input.add(inputData[count]) ;
        }
        Input = Filter.filterEvenNumbers(Input);
        for(int count = 0; count < Input.size(); count++){
            System.out.print(Input.get(count)+" ");
        }
    }
    public ArrayList filterEvenNumbers(ArrayList Input){
        int size = Input.size();
        ArrayList Output = new ArrayList();
        int testInput = 0;
        for(int count = 0; count < size ; count++){
            testInput = Integer.parseInt((String) Input.get(count));
            if(testInput % 2 ==0){
                Output.add(Input.get(count));
            }
        }
        return Output;
    }
}
