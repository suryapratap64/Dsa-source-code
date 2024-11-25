#include <bits/stdc++.h>
using namespace std;
class node
{
    public:

    int data;
    node *next;
    node()
    {
        this->next = 0;
        this->next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};
void print(node* &head){

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertathead(node* &head,node* &tail,int data){
      if (head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;
  
    }
    else{
    node* newnode=new node(data);
    newnode ->next=head;
    head=newnode;
    }
}
void insertattail(node* &tail,int data,node* &head){
    // check for empty linked list
    if (head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;

    }
    node* newnode=new node(data);
    tail->next=newnode;
    if(head==NULL){
        head=newnode;
    }
    tail =newnode; 

}
int findlength (node* &head,node* &tail){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;

    }
    return len;
}
void insertatposition( int data,int position,node* &head,node* &tail){
    if (head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;

    }
    if(position ==0){
        insertathead(head,tail,data);
        return;
    }  
    int len=findlength(head,tail);
    if(position>=len){ 
        insertattail(head,data,tail);
        return; 
    }
    int i=1;
    node* prev=head;
    while(i<position){
        prev=prev->next; 
        i++;

    }
    node* curr=prev->next;
    node* newnode=new node(data);
   
    newnode->next=curr; 
    prev->next=newnode;   
} 
 
int main()
{
// node* head=new node(10);
node* head=NULL;
node* tail=NULL;
insertathead(head,tail,30);
insertathead(head,tail,60);
insertathead(head,tail,70);
insertathead(head,tail,80);
insertathead(head,tail,90);
print(head);
insertatposition(99,3,head,tail);
cout<<endl;
print(head); 

return 0;
}
 