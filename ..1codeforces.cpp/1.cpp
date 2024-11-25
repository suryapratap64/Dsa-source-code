#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n>>m;
         vector<int>v(n);
        for(int i=0;i<n;i++){
              cin>>v[i];
        }
        
       
       
        
      
     


    }
    
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int>v(n);
//         for(int i=0;i<n;i++){
//               cin>>v[i];
//         }
//         int ans=0;
//         if(v[1]==1 &&v[0]==1){
//                     ans=1;
//                 }
//                 else if((v[0]==0 &&v[1]==1 )||(v[0]==1 &&v[1]==0)||(v[0]==0 &&v[1]==0)){
//                     ans=v[0]|v[1];
//                 }
                
//         for(int i=1;i<n;i++){
            
          
                
//         if(ans==v[i] &&v[i]==1){

//             ans=ans&v[i];
//         }
//         else{
//             ans=ans|v[i];
//         }
        


//         }
//         if(ans==1){
//             cout<<"YES"<<endl;
//         }else{
//             cout<<"NO"<<endl;
//         }

      
     


//     }
    
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//          string s="";

//     bool x = true;
//        while (n--) {
//         if (x) {
//             s.push_back('0');  
//         } else {
//             s.push_back('1');  
//         }

//         x = !x; 
//     }
//          cout<<s<<endl;

     


//     }
    
//     return 0;
// }
