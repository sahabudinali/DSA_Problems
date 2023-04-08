class BFSTraversal{
    private int vertex;// total number of vertex in graph. 
    private LinkedList<Integer>adj[];// for adjacent value
    private Queue<Integer>q;// for maintaing the queue;
    BFSTraversal(int v){
        vertex=v;
        adj=new LinkedList[vertex];
        for(int i=0;i<v;i++){
            adj[i]=new LinkedList<>();           
        }
        q=new LinkedList<Integer>();
    }
    void insertEdge(int v, int w){
        adj[v].add(w);
    }
    void showBFS(int n){
        //intialize boolean for holding the data;
        boolean node[]=new boolean[vertex];
        node[n]=true;
        int a=0;
        q.add(n);
        while(q.size()!=0){
            n=q.poll();
            System.out.println(n + " ");
            // iterate through the linkedlist and insert into the queue.    
            for(int i=0;i<adj[n].size();i++){
                a=adj[n].get(i);
                if(!node[a]){
                    node[a]=true;
                    q.add(a);
                }                
            }
        }
    }
}

public class Main {
    public static void main(String[] args) {
        BFSTraversal graph=new BFSTraversal(10);
        graph.insertEdge(0, 1);    
        graph.insertEdge(0, 2);    
        graph.insertEdge(0, 3);    
        graph.insertEdge(1, 3);    
        graph.insertEdge(2, 4);  
        graph.insertEdge(3, 5);       
        graph.insertEdge(3, 6);    
        graph.insertEdge(4, 7);    
        graph.insertEdge(4, 5);    
        graph.insertEdge(5, 2);    
        graph.insertEdge(6, 5);    
        graph.insertEdge(7, 5);  
        graph.insertEdge(7, 8);   
        System.out.println("Breadth First Traversal for the graph is:");    
        graph.showBFS(0); 
    }
}