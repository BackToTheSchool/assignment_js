package BST;

public class hw23 {
    public static void main(String[] args) {
        BinaryTree Test = new BinaryTree();
        Test.insertBst(6,"배터리 단자가 부식 되었는가 ?");
        Test.insertBst(5,"단자를 깨끗하게 하고 다시 시도해");
        Test.insertBst(7,"케이블을 교체하고 다시 시도 해 ");
        Test.insertBst(12,"차가 달깍거리니 ? ");
        Test.insertBst(11,"배터리를 교체 해");
        Test.insertBst(15,"시동이 안걸려?");
        Test.insertBst(13,"점화를 써");
        Test.insertBst(17,"엔진이 바로 꺼져?");
        Test.insertBst(16,"초크 상태 확인해");
        Test.insertBst(18,"서비스센터에 가");
        Test.checkCar();
    }
}
