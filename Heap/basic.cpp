#include <bits/stdc++.h>
using namespace std;
class heap
{
    int arr[100];
    int size ;
    heap(){
        arr[0]=-1;
        size=0;

    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    void deletefromheap(){
        if(size==0){J
        return;}
        //put last element to first element
        arr[1]=arr[size];
        //step2 remove last element
        size--;
        //take root to its correct position
        int i=1; 
        while(i<size){
            int leftindex=2*i;
            int rightindex=2*i+1;
            if(leftindex<size &&arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;

            }
            else if(rightindex<size &&arr[i]<arr[rightindex]) {
                swap(arr[i],arr[rightindex]);
                i=rightindex;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void heapify(int arr[],int n,int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        if(left<=n &&arr[largest]<arr[left]){
            largest=left;

        }
        if(right<=n&&arr[largest]<arr[right]){
            largest=right;
        }if(largest!=i){
            swap(arr[largest],arr[i]);

            heapify(arr,n,largest);

        }
    }
    void heapsort(int arr[],int n){
        int size=n;
        while(size>1){
            // step 1
            swap(arr[size],arr[1]);
            size--;
            ///step 2
            heapify(arr,size,1);


        }
    }
};
int main()
{
    heap h;
    h.insert(50);
    h.insert(40);
    h.insert(30);
    h.insert(20);
    h.insert(70);
    h.insert(90);
    h.insert(80);
    h.print();
    h.deletefromheap();
    //t.c=o(n);
    int arr[6]={-1,54,53,55,52,50};
    int n=5;

    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);


    }
    cout<<"printting the arr now"<<rndl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    heapsort(arr,n);
        cout<<"printting the arr now"<<rndl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";

    }
    //t.c=O(nlogn)
    //max heap
    priority_queue<int>pq;
    pq.push(4);
    pq.push(7);
    pq.push(9);
    pq.push(6);
    cout<<"element at top "<<pq.top();
    pq.pop();
    cout<<"element at top "<<pq.top();
    cout<<" size is"<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"pq is  empty"<<endl;
    }
    else{
        cout<<" pq is not empty"<<endl;

    }
    //min heap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    minheap.push(7);
    minheap.push(9);
    minheap.push(88);
    minheap.push(44);
     cout<<"element at top "<<pq.top();
    pq.pop();
    cout<<"element at top "<<pq.top();
    cout<<" size is"<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"pq is  empty"<<endl;
    }
    else{
        cout<<" pq is not empty"<<endl;

    }




    return 0;
}