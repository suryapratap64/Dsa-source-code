class node{
    public:
    int data;
    int i;
    int j;

};
class compare{
    public:
    bool operator()(node* a,node* b){
        return a->data>b->data;

    }
}






vector<int>mergeksortedarray(vector<vector<int>>&karrays,int n){
    priority_queue<node*,vector<node*>,compare>minheap;
    //step1 saare arrays ke first element insert hai
    for(int i=0;i<k;i++){
        node* temp=new node(arr[i][0],i,0);
        minheap,push(temp);

    }
vector<int>ans;
//step2
while(minheap.size()>0){
    node* temp=minheap.top();
    ans.push_back(tmp->data);
    minheap.pop();
    int i=temp->i;
    int j=temp->j;
    if(j+i<karrays[i].size()){
        node* next=nw node(arr[i][j+1],i,j+1);
        minheap.push(next);
    }


}
return ans;
}
// t.c=n*klog(k);