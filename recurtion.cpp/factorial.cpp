#include<iostream>
using namespace std;
   int factorial(int n){
    cout<<"thenumber is:"<<n<<endl;
        if(n==1){
            return 1;

        }
       int ans=factorial(n-1);
            //int ans=n*factorial(n-1);
            return ans;
        

    }
int main(){
 

    int n;
    cin >> n;
    cout<<factorial(n)<<endl;


    return 0;
}