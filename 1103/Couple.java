public class Couple extends Restaurant {
    private String activity;
    public Couple(int num, double money, String text,String name,String fun){
        super(num,money,text,name);
        this.activity = fun;
    }
    public void setPrice(Human A){
        double money = getPrice() * A.getPerson();
        setPrice(money);
    }

    public void show(Human A){
            setPrice(A);
            System.out.print("I recommend you "+ getName()+" restaurant\n");
            System.out.print("Total fee will be \\" + getPrice()+" and they are " +getAtmosphere()+"\n");
            System.out.print("You can enjoy "+ this.activity+"\n");

    }

}
