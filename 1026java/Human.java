import java.util.Arrays;

class Human {
    String[] fiName = {"John", "Tou", "Michaela", "Jake", "Jacquelyn", "Sally"};
    String[] seName = {"Johnson", "Xiong", "Michaelson", "Jacobson", "Jackson", "Weber"};
    String[] position = {"Manager", "Software Engineer", "District Manager", "Programmer", "DBA", "Web Designer"};
    String[] seperationDate = {"2016-12-31", "2016-10-15", "2015-12-19", " ", " ", "2015-12-18"};


    public void Show(int a) {
        System.out.print(fiName[a] + " " + seName[a] + "\t\t" + position[a] + "\t\t" + seperationDate[a] + "\n");
    }

    public void SortShow() {
        Human Compare = new Human();
        Arrays.sort(this.seName);
        for (int count = 0; count < 6; count++) {
            for (int seCount = 0; seCount < 6; seCount++) {
                if (this.seName[count].equals(Compare.seName[seCount]))
                    Compare.Show(seCount);
            }

        }


    }

    public void SeachString(String name) {
        for(int count = 0; count < 6;count++)
            if(this.fiName[count].contains(name)||this.seName[count].contains(name))    {
            this.Show(count);
            }

            }

        }




