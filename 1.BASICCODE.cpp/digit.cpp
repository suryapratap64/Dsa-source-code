#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int ans=1;
 int n;
 int sum=0;
 cin>>n;
 while(n!=0){
    int digit=n%10;
    ans =ans*digit;
    sum =sum+ans;
    n=n/10;

 }
 cout<<sum;
return 0;
}