package BST;

import java.util.Scanner;

public class BinaryTree {

    private treenode root = new treenode(8,"열쇠를 꽃고 돌렸을 떄 차가 조용한가 ? ");
    Scanner scan = new Scanner(System.in);

    public treenode insertkey(treenode root,int dir,String data){
        treenode hw = root;
        treenode newnode = new treenode(dir,data);
       // char direction = scan.next().charAt(0);
        if (hw == null)
            return newnode;
        else if(hw.data > newnode.data ){
            hw.left = insertkey(hw.left,dir,data);
            return hw;
        }
        else if(hw.data < newnode.data){
            hw.right = insertkey(hw.right, dir,data);
            return hw;
        }
        else
            return hw;
    }
    public void insertbst(int dir,String data){
           root = insertkey(root,dir,data);
    }
    public void test(treenode test){
        if(test != null){
                System.out.print(test.datas);
                char dir = scan.next().charAt(0);
                if(dir == 'Y'){
                    test(test.left);
                }
            //System.out.print(test.datas+"\n");
                else if(dir == 'N'){
                    test(test.right);
                }
            }
        }
    public void testf(){
        test(root);
    }
    }

