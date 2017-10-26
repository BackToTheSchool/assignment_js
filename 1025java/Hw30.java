public class Hw30 {
    public static void main(String[] args) {
        int num1= 0;
        int num2= 0;
        int result;
        for(num1 = 0; num1 <= 12;num1++){
            for(num2 = 0;num2 <= 12; num2++){
                result = num1 * num2;
                System.out.print(num1 + " * " + num2 +" = "+result+"\n");
            }
        }
    }
}
