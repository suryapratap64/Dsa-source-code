#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int data = 0)
    { // Constructor with default argument
        this->data = data;
        this->prev = NULL;

        this->next = NULL;
    }
    ~node(){
        cout<<"node with the value"<<this->data<<"delete"<<endl;
    }
};

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}
int findlength(node *&head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
  
    return len;
}
void insertathead(node *&head, node *&tail, int data) {
    if (head == NULL) {
        // The list is empty
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
    } else {
        // The list is not empty
        // Step 1: Create a new node
        node *newnode = new node(data);
        
        // Step 2: Link the new node to the current head
        newnode->next = head;
        
        // Step 3: Update the previous head's `prev` pointer to point to the new node
        head->prev = newnode;
        
        // Step 4: Update the head pointer to point to the new node
        head = newnode;
    }
}

void insertattail(node *&head, node *tail, int data)
{
    if (head == NULL)
    {
        // ll is empty
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        // ll is not empty
        node *newnode = new node(data);
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}
void insertatposition(node *&head, node *&tail, int data, int position)
{
    if (head == NULL)
    {
        // ll is empty
        node *newnode = new node(data);
        head = newnode;
        tail = newnode;
    }
    else
    {
        if (position == 1)
        {
            insertathead(head, tail, data);
            return;
        }
        int len = findlength(head);
        if (position >= len)
        {
            insertattail(head, tail, data);
            return;
        }
        // insert at middle
        // step-1 find prev and curr
        int i = 1;
        node *prevnode = head;
        while (i < position - 1)
        {
            prevnode = prevnode->next;
            i++;
        }
        node *curr = prevnode->next;
        // step-2 create node
        node *newnode = new node(data);
        // step-3
        prevnode->next = newnode;
        newnode->prev = prevnode;
        curr->prev = newnode;
        newnode->next = curr;
    }
}
void deletefrompos(node *&head, node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "ll is empty";
        return;
    }
    if (head->next = NULL)
    {
        // single node
        node *temp = head;
        head = NULL;
        tail = NULL ;
         delete temp;
        return;
    }
    if (position == 1)
    {
        // want delete first node
        node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = findlength(head);
    if (position == len)
    {
        // delete last node
        node *temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }
    // delete from middle of the linked list
    // step-1 find left curr right
    int i=1;
    node*left=head;
    while(i<position-1){
        left=left->next;
        i++;
    }
    node *curr=left->next;
    node* right=curr->next;
    //step-2
    left->next=right;
    //step-3
    right->prev=left;
    //step -4
    curr->next=NULL;
    curr->prev =NULL;
    delete curr;
}
node* reverse(node* &prev ,node* &curr){
    //base case
    if(curr==NULL){
        return prev;

    }
    //1 casesolve then recurtion take care
    node* forward=curr->next;

    curr->next=prev;
    reverse(curr,forward);
}
node* reversingloop(node* head){
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL){
        node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;



    }
    return prev;

}
int main()
{

    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *head = first;
    node *tail = third;
    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    print(head);
    cout << endl;
    insertathead(head, tail, 33);
    cout << endl;
    print(head);
    insertattail(head, tail, 303);
    cout << endl;
    print(head);
    cout<<endl;
    deletefrompos(head,tail,3);
     print(head);

    cout<<endl;
    node*prev=NULL;
    node* curr =head;
head=reverse(prev,curr);
cout<<endl;
print(head);
cout<<endl;

    return 0;
}
