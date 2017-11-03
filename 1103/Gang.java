public class Gang extends Restaurant {
    private double discount;
    public Gang(int num, double money, String text,String name,double rate){
        super(num, money, text,name);
        this.discount = rate;
    }
    public void setPrice(Human A){
        double money = getPrice();
        money = money*A.getPerson()*(1-this.discount*A.getPerson());
        setPrice(money);
    }


    public boolean recommend(Human A){
        setPrice(A);
        if(this.getPrice()<=A.getMoney()){
            return true;
        }
        return false;
    }
    public void show(Human A){
        System.out.print("I recommend you "+ getName()+" restaurant\n");
        System.out.print("Total fee will be \\" + getPrice()+" and they are " +getAtmosphere()+"\n");

    }
}
