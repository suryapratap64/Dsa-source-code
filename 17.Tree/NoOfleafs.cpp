#include<bits/stdc++.h>
using namespace std;
void inorder(BinaryTreeNode<int>*root ,int count){//
if(root==NULL){
    return;
}
inorder(root->left,count):
if(root->left==NULL && root->right==NULL){
    count++;
}
inorder(root->right,count);

}
int noofleaves(BinarTreeNode<int>*root){
    int cnt=0;
    inorder(root,cnt);
    return cnt;
}
int main(){
    return 0;
}


