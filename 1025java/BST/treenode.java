package BST;

public class treenode{
    int data;
    String datas;
    treenode left;
    treenode right;

    public treenode(){
        this.left = null;
        this.right = null;
    }
    public treenode(int dir,String data){
        this.data = dir;
        this.datas = data;
        this.left = null;
        this.right = null;

    }
    public Object getdata(){
        return data;
    }
}
