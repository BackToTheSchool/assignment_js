package BST;

import java.util.Scanner;

public class BinaryTree {//트리노드를 이용한 바이너리 트리 생성

    private TreeNode root = new TreeNode(8,"열쇠를 꽃고 돌렸을 떄 차가 조용한가 ? ");//바이너리 트리의 첫번째 노드(뿌리)
    Scanner scan = new Scanner(System.in);

    public TreeNode insertKey(TreeNode root,int dir,String data){//바이너리 트리에 노드를 달아줌
        TreeNode hw = root;
        TreeNode newNode = new TreeNode(dir,data);
       // char direction = scan.next().charAt(0);
        if (hw == null)
            return newNode;
        else if(hw.data > newNode.data ){
            hw.left = insertKey(hw.left,dir,data); // 새로 생긴 노드의 주소가 기존 노드의 주소보다 작으면 왼쪽에 있는 노드와 비교
            return hw;
        }
        else if(hw.data < newNode.data){ //새로 생긴 노드의 주소가 기존 노드의 주소보다 크면 오른쪽에 있는 노드와 비교
            hw.right = insertKey(hw.right, dir,data);
            return hw;
        }
        else
            return hw;
    }
    public void insertBst(int dir,String data){//노드에 들어갈 값을 입력받고 그걸 뿌리에 달아줌
           root = insertKey(root,dir,data);
    }
    public void test(TreeNode test){//사용자가 입력한 값에 따라서 맞는 데이터 출력
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
    public void checkCar(){
        test(root);
    }
    }

