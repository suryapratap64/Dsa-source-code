#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[10];
  cout<<"address of element"<<arr<<endl;
  cout<<"address of first element"<<&arr[2]<<endl;
cout<<*arr<<endl;
  cout<<"5th"<<*arr+1<<endl;
  cout<<"6th"<<*(arr+1)<<endl;
 cout<<"7th"<<(*arr)+1<<endl;
  cout<<"8th"<<arr[2]<<endl;
  cout<<"9th"<<*(arr+2)<<endl;
  int brr[10] = {5, 66, 3, 6, 33};
  int i = 3;
  cout << brr[i] << " "<<i[brr]<<endl;
  // difference bettwen ponter and array
  int temp[10];
  cout<<sizeof(temp)<<endl;
  int *ptr=&temp[0];
  cout<<sizeof(ptr)<<endl;
  cout<<sizeof(*ptr)<<endl;
  cout<<sizeof(&ptr)<<endl;
  cout<<sizeof(&temp);
  int a[4] = {1, 2, 3, 4};
  cout << &a[3] << endl;
  cout << &a << endl;
  int *p = &a[4];
  cout << &p << endl;

  return 0;
}