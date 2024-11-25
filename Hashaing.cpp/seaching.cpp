// C++ program to demonstrate  
// Initialization, indexing,  
// and iteration 
#include <iostream> 
#include <unordered_map> 
using namespace std; 
  
// Driver code 
int main() 
{ 
  // Declaring umap to be of  
  // <string, double> type key  
  // will be of string type and  
  // mapped value will be of double type 
  unordered_map<string, double> umap = {  //inserting element directly in map 
  {"One", 1}, 
  {"Two", 2}, 
  {"Three", 3} 
}; 
  
  // inserting values by using [] operator 
  umap["PI"] = 3.14; 
  umap["root2"] = 1.414; 
  umap["root3"] = 1.732; 
  umap["log10"] = 2.302; 
  umap["loge"] = 1.0; 
  
  // inserting value by insert function 
  umap.insert(make_pair("e", 2.718)); 
  
  string key = "PI"; 
  
  // If key not found in map iterator  
  // to end is returned 
  if (umap.find(key) == umap.end()) 
    cout << key << " not found\n\n"; 
    
  // If key found then iterator to that  
  // key is returned 
  else
    cout << "Found " << key << "\n\n"; 
    
  key = "lambda"; 
  if (umap.find(key) == umap.end()) 
    cout << key << " not found\n"; 
  else
    cout << "Found " << key << endl; 
    
  // iterating over all value of umap 
  unordered_map<string, double>::iterator itr; 
  cout << "\nAll Elements : \n"; 
  for (itr = umap.begin();  
       itr != umap.end(); itr++)  
  { 
    // itr works as a pointer to  
    // pair<string, double> type  
    // itr->first stores the key part and 
    // itr->second stores the value part 
    cout << itr->first << "  " <<  
            itr->second << endl; 
  } 
}