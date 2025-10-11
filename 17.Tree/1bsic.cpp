#include <bits/stdc++.h>
using namespace std;
//tree me traversal
//just like this
// root->left = build(preorder, leftInorder);
// root->right = build(preorder, rightInorder);



//in traversal root->left ot root->right likh do aur functionn koo call kar do traversal khatam

class node
{
//int left=solve(root->left);
//int left store how many nodes present in the left node thst counting the number of nodes;

public:

    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter for the left insert" << endl;
    root->left = buildtree(root->left);
    cout << "enter for the right insert" << endl;
    root->right = buildtree(root->right);
    return root;
}
void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
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
    // while(!q.empty()){
    //     node* temp=q.front();
    //     cout<<temp->data<<endl;
    //     q.pop();
    //     if(temp->left){
    //         q.push(temp->left);

    //     }
    //     if(temp->right){
    //         q.push(temp->right);

    //     }
    // }
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
//
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << endl;

    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
}
node* bulildfromlevelorder(node* root){
    queue<node*>q;
    q.push(root);
    cout<<"enter the data for the root"<<endl;
    int data;
    cin>>data;
    root =new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"enter for left node"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata; 
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }
        cout<<"enter thhe node for the right node"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);

        }

    }

}

int main()
{
    node *root = NULL;
    // creating a tree
    root = buildtree(root);
    levelordertraversal(root);
    inorder(root);
    preorder(root);
    postorder(root);
   bulildfromlevelorder(root);

    return 0;
}
