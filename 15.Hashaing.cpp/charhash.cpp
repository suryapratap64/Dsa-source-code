#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    //pre compute
    // The ASCII value of 'A' is 65.
// The ASCII value of 'a' is 97.
// The ASCII value of '0' is 48.
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;

    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;

    }


    return 0;
}
