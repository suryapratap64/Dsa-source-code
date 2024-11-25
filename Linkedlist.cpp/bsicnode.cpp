#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    // Reset the slow pointer to the head of the linked list, and move both pointers one step at a time
    //slow==head;

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
int main()
{
    node *first = new node(7);
    node *second = new node(5);
    node *third = new node(4);
    node *fourth = new node(9);
    node *fifth = new node(2);
  first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(first);

    return 0;
}