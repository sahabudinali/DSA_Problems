class Node{
    public:
    int data;
    Node* next;
};

void show(Node* head){
    Node* fast=head;
    Node*ans=head;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    } 
    ans=slow->next;
    while(head!=NULL){
        cout<<head->data;
        
        if(head->next==slow){
            head=ans;
        }
        head=head->next;
    }
    
      while(ans!=NULL){
        cout<<ans->data;
        
        ans=ans->next;
    }
}

int main(){
    
    Node* head=NULL;
    Node* s=NULL;
    Node* t=NULL;
    Node* f=NULL;
    head=new Node();
    s=new Node();
    t=new Node();
    f=new Node();
    head->data=1;
    head->next=s;
    s->data=2;
    s->next=t;
    t->data=3;
    t->next=f;
    f->data=4;
    f->next=NULL;
    show(head);
}