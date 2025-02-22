#include<bits/stdc++.h>
using namespace std;
void printsubseq(string str,string output,int i){
    if(i>=str.length()){
        cout<<output<<endl;
        return;

    }
    //exclude
    printsubseq(str,output,i+1);
    //include
    output.push_back(str[i]);
    printsubseq(str,output,i+1);
}
int main(){
    string str="abc";
    string output="";
    int i=0;
    printsubseq(str,output,i);




    return 0;

}