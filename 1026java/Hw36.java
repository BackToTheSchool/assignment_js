import java.util.Scanner;

public class Hw36 {
    public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        int count = 0;int[] result = new int[30];
        String[] input = new String[30];
        System.out.print("Enter the number : ");
        input[count] = Scan.next();
        for(count = 0; !input[count].equals("done");){
            System.out.print("Enter the number : ");
            count++;
            input[count] = Scan.next();
        }
        int sum=0;
        for(int number = 0; number < count; number++){
            result[number]= Integer.parseInt(input[number]);
            sum = sum + result[number];
        }
        int average = sum / count;
        int maximum = result[0];
        int minimum = result[0];
        for(int number =0;number <count;number++){
            if(maximum < result[number]){
                maximum = result[number];
            }
            if(minimum > result[number]){
                minimum = result[number];
            }
        }
        double[] devision = new double[count];
        double standard=0;
        for(int number = 0; number < count ; number ++){
            double down = ( average - result[number]);
            double up = 2.0;
            devision[number]= Math.pow(down,up);
            standard = standard + devision[number];
        }
        standard = standard /count;
        standard = Math.sqrt(standard);
        System.out.printf("The average is %d\nThe minimum is %d\nThe maximum is %d\nThe standard deviation is %.2f",average,minimum,maximum,standard);



    }
}

