#include<bits/stdc++.h>
using namespace std;
int main ()
{
//  int i=5;
//  cout<<i;
//  cout<<&i<<endl;
//  char ch='a';
// //  //char *p=&ch;
//  cout<<*p<<endl;
//  int num=5;
//  cout<<&num;
// // int *p=&num
//  cout<<*p<<endl;
//  int *ptr=&i;
//  cout<<*ptr;
//  cout<<"address is"<<ptr<<endl;
//  cout<<"valu is" <<*ptr<<endl;
// double d=0.8;
// double *p=&d;
// cout<<*p<<" "<<p<<endl;
// int *p;
// int *p=0;
// int *p=&i;
// cout<<p<<endl;
// cout<<*p<<endl;
int num=5;
int a=num;
a++;
int *p=&num;
cout<<"beforer"<<num<<endl;
*p++;
cout<<"after"<<num<<endl;
//copying pointer l;
int *q=p;
cout<<p<<endl<<*p;
//important comcepy;
int i=3;
int *t=&i;
cout<<(*t)++<<endl;
cout<<*t<<endl;
cout<<"before t"<<t<<endl;
t=t+1;
cout<<"after t"<<t<<endl;



 
 
 
 
 
 
return 0;
}