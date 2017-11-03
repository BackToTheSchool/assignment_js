public class Running {
    public static void main(String[] args) {

        Couple Japan = new Couple(2,7000,"fancy but quiet","Japanese","comic books");
        Couple Western = new Couple(2,8000,"romantic but noisy","Western","Wine");
        Gang Chinese = new Gang(5,12000,"many dishes but expensive","Chinese",0.05);
        Gang Korean = new Gang(4,9000,"noisy but cheap","Korean",0.04);
        Human Party = new Human();

        if(Party.getPerson() > 15 ){
            System.out.print("Your party is so big run this program again");
        }
        else{
            if(Party.getPerson() < 3) {
                Party.check(Japan, Western);
            }
            else {
                Party.check(Chinese, Korean);
            }
        }
    }
}

