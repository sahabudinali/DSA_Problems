//revsre the linked list.
//1->2->3->null;
//output should be  3->2->1->NULL
class Node{
    public:
    int data;
    Node* next;
};

void show(Node* head){
    //here head is assign to curr
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    //  NUll-> 1->2->3->NULL
    // curr and head are point to the node 1
    // and prev and next are point to the NULL value.
    
    while(curr!=NULL){
        // here next will now point to the next value of curr.
        
        next=curr->next;
        
        // curr next will become follow the prev which is null
        curr->next=prev;
        // when curr next will follow the null the prev follow the next which is curr.
        prev=curr;
        // curr now follwo the next.
        curr=next;
    }
    head=prev;
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    
}

int main() {
    
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
    show(head);
}