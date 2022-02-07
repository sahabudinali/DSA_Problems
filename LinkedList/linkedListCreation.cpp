
//class node
//Node consist of two things one is data and second is address of the next data.
class Node{
    public:
    int data;
    // pointing the next data address.
    Node* next;
};

void show(Node* head){
    
    while(head!=NULL){
        //here it will print the data
        cout<<head->data<<" ";
        // and here when first data is printed then head will point to address of the next data.
        head=head->next;
    }
}

int main() {
    //here initiall we are declare all variable null.
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;
    
    head=new Node();
    second=new Node();
    third=new Node();
    // here we assign the value and address to each variable.
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    //method show and passing the head.
    show(head);
}