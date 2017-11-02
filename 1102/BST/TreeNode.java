package BST;

public class TreeNode{//바이너리 트리의 노드
    int data; //data로 트리구조 생성
    String datas;//data의 값에 맞는 스트링 입력
    TreeNode left;
    TreeNode right;

    public TreeNode(){
        this.left = null;
        this.right = null;
    }
    public TreeNode(int dir,String data){
        this.data = dir;
        this.datas = data;
        this.left = null;
        this.right = null;

    }
}
