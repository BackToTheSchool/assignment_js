import java.util.ArrayList;
import java.util.Scanner;
public class Hw34 {
    public static void main(String[] args) {
        Scanner Scan = new Scanner(System.in);
        ArrayList Employee = new ArrayList();
        Employee.add("John Smith");
        Employee.add("Jackie Jackson");
        Employee.add("Chris Jones");
        Employee.add("Amanda Cullen");
        Employee.add("Jeremy Goodwin");
        int sizeofArray = Employee.size();
        int count = 0;
        System.out.print("There are "+sizeofArray+" employees\n");
        for(count = 0; count < sizeofArray;count++){
            System.out.print(Employee.get(count)+"\n");
        }
        System.out.print("Enter the employee name to remove ");
        String employeesName = Scan.nextLine();
        if(Employee.contains(employeesName)){
            Employee.remove(employeesName);
            sizeofArray = Employee.size();
            System.out.print("There are "+sizeofArray+" employees\n");
            for(count = 0; count < sizeofArray;count++){
                System.out.print(Employee.get(count)+"\n");
            }
        }
        else{
            System.out.print("You entered wrong name");
        }

    }
}
