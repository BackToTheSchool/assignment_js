import java.util.Scanner;

public class Human {
    private int person;
    private int woman;
    private double money;
    public Human(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Hello. How many members do you have?");
        int person = scan.nextInt();
        this.setPerson(person);
        System.out.print("How much money do you have ?");
        double won = scan.nextDouble();
        this.setMoney(won);
        System.out.print("How many women are there? ");
        int women = scan.nextInt();
        this.setWoman(women);
    }
    public int getPerson(){
        return person;
    }

    public int getWoman() {
        return woman;
    }

    public double getMoney() {
        return money;
    }

    public void setMoney(double money) {
        this.money = money;
    }

    public void setPerson(int person) {
        this.person = person;
    }

    public void setWoman(int woman) {
        this.woman = woman;
    }
    public void check(Restaurant A,Restaurant B){

        if(A.recommend(this)&&B.recommend(this)){
            A.show(this);
            B.show(this);
            if(this.getWoman()==0){
                if(A.getPrice()>B.getPrice()){
                    System.out.print("I will recommend you "+B.getName()+". It's cheaper.");
                }
                else
                    System.out.print("I will recommend you "+A.getName()+". It's cheaper.");
            }
        }
        else if(A.recommend(this)){
            A.show(this);
        }
        else if(B.recommend(this)){
            B.show(this);
        }
        else
            System.out.print("You can't go anywhere. You need more money.");
    }
}
