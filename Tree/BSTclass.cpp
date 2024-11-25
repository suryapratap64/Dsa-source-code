#include <bits/stdc++.h>
using namespace std;
class Node
{
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertintobst(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertintobst(root->right, d);
    }
    else
    {
        root->left = inserintobst(root->left, d);
    }
    return root;
}
void levelordertraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                // queue still having some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void takeinput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        insertintobst(root, data);
        cin >> data;
    }
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
//	Returns true if the operand is false or zero
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;

    inorder(root->right);
}
void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
}
Node* minvalue(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;

    }
return temp;
}
Node* maxvalue(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;

    }
return temp;
}
Node* deletefrombst(Node* root,int val){
    //base case 
    if(root==NULL){
        return root ;

    }
    if(root ->data==val){

        //0 child
        if(root->left==NULL && root->right==NULL)
{
    delete root;
    return NULL;



}

        // 1 child
        //left child

        if(root->left!=NULL &&root->right==NULL){
            Node* temp=root->data;
delete root;
return temp;

        }
//ritght child
if(root->left==NULL &&root->right1=NULL){
    Node* temp=root->right;
    delete Node*temp;
    return temp;
}

}

        //2 child
        if(root->right!=NULL && root->left!=NULL){
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deletefrombst(root->right,mini);
            return root;
            
        }
    }
    else if(root->data>val){
        //right part me jaao
        root->left=deletefrombst(root->left,val);
        return root;


    }
    else{
        //right part me jaao
        root->right=deletefrombst(root->right,val);
        return root;

    }
}


int main()
{
    Node *root = NULL;
    cout << "enter the root ->data" << endl;
    takeinput(root);
    cout << "printing the bst" << endl;
    levelordertraversal(root);
    cout << "printing inoder" << endl;
    inorder(root);
    cout << "printing preorder" << endl;
    preorder(root);
    cout << "printing postorder" << endl;
    postorder(root);
    cout<<"min valis "<<minvalue(root)->data<<endl;
    cout<<"max val is"<<maxvalue(root)->data<<endl;

    return 0;
}
