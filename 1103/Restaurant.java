public class Restaurant {
    private int party;
    private double price;
    private String atmosphere;
    private String name;
    public Restaurant(int num, double money, String text,String name){
        this.party = num;
        this.price = money;
        this.atmosphere = text;
        this.name = name;
    }
    public void setPrice(double money){
        this.price =money;
    }
    public String getName(){
        return this.name;
    }
    public double getPrice(){
        return this.price;
    }
    public String getAtmosphere(){
        return this.atmosphere;
    }
    public boolean recommend(Human a){
        if(this.price * a.getPerson() <= a.getMoney())
            return true;
        else
            return false;
    }
    public void show(Human A){
        System.out.print("I recommend you "+ getName()+" restaurant\n");
        System.out.print("Total fee will be \\" + getPrice()*A.getPerson()+"and they are " +getAtmosphere()+"\n");
    }
}
