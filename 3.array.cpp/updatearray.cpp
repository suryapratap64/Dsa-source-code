#include<iostream>
using namespace std;

void update(int array[], int n){
    array[0] = 99;
}

int main(){
    int array[4] = {3, 6, 5, 3};
    update(array, 4);
    
    cout << "printing main function: ";
    for(int i = 0; i < 4; i++){
        cout << array[i] << " "; 
    }
    cout << endl;

    return 0;
}
