#include<iostream>
using namespace std;
int counting(int n){
    if(n==0){
    
        return 0;
    }
    cout<<n<<endl;
    int ans =n-1;
   counting(ans);
}
int main(){
    int n;
    cin>>n;
    cout<<counting(n)<<endl;
    return 0;
}