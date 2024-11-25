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
int findlength (node* &head,node* &tail){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;

    }
    return len;
}
// temp = temp->next; is used to traverse the list.
//temp->next = temp; creates a self-loop at the current node, which can be used for specific purposes like creating circular references but generally breaks the linked list's flow.
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
void deletenode(int position,node* &tail,node* &head){
   if(head==NULL){
    cout<<"can not delete ll";
    return;
   } 
   if(position==1){
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
   }
   int  len= findlength(head,tail);
   //deleting last element
   if(position==len){
    int i=1;
    node* prev=head;
    while(i<position-1){
        prev=prev-1;
        i++;
    }
    prev->next=NULL;
    node* temp=tail;
    tail=prev;
    delete temp;
    
   }

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
deletenode(1,head,tail);
cout<<endl;
print(head);

return 0;
}
 