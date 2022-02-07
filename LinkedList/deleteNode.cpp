class Node{
    public:
    int data;
    Node* next;
};

void show(Node* head,int n){
    
    while(head!=NULL){
        if(head->data==n){
            head=head->next;
        }
        cout<<head->data<<" ";
        head=head->next;
    }
    
}

int main() {
    int n=2;
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    
    head=new Node();
    second=new Node();
    third=new Node();
    
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    show(head,n);
}