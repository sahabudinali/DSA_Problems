class Node{
    int key;
    Node left, right;
    Node(int item){
        key=item;
        left=right=null;
    }
    
}
class Nodes {
    
    Node root;
    public void pre(Node data){
    if(data==null){
         return;
    }
   System.out.print(data.key+" ");
     pre(data.left);
     pre(data.right);
    
    }
    
    public void post(Node data){
     
     if(data==null){
         return;
     }
     
    System.out.print(data.key+" ");
     post(data.left);
     post(data.right);
        
    }
    
    public  void inorder(Node data){
     
     if(data==null){
         return;
     }
     System.out.print(data.key+" ");
     inorder(data.left);
     inorder(data.right);
    }
    void pre(){
        pre(root);
    }
    void post(){
        post(root);
    }
    void inorder(){
        inorder(root);
    }
    public static void main(String[] args) {
    Nodes tree=new Nodes();
    tree.root=new Node(1);
    tree.root.left=new Node(2);
    tree.root.left.left=new Node(3);
    tree.root.left.right=new Node(4);
    tree.root.right=new Node(5);
    System.out.println("\nPreorder");
    tree.pre(tree.root);
    System.out.println("\nPostorder");
    tree.post(tree.root);
    System.out.println("\nInorder");
    tree.inorder(tree.root);
    }
}