#include<iostream>

using namespace std;






// Great question! You're asking why use a for loop inside recursion — especially when we're already passing the index i (or start) into the recursive function.

// This is a common point of confusion in backtracking, so let’s break it down clearly.

// 🤔 Why use a for loop in recursive subset generation?
// The for loop is used to explore each possible choice for the next element in the subset, starting from the current index. Recursion is used to build the subset step by step by going deeper each time we add a new element.

void printdigit(int n){
    //base case 
    if(n==0){
        return;
    }
    int digit=n%10;
     printdigit(n/10);
    cout<<digit;
  
   
}
int main(){
    int n;
    cin>>n;
    printdigit(n);
    return 0;
} 

