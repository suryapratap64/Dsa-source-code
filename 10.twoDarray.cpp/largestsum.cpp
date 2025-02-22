 #include<iostream>
 using namespace std;
 int largestrowsum(int arr[][4],int i,int j){
    int maxi =INT8_MIN;
    int rowindex=-1;
    for (int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=i;
        }
    
    
 }
 cout<< "maxi sum is "<<maxi;
 }
 

void printsumrow(int arr[][4],int i,int j){
    for (int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
           
        }
        cout<<sum<<endl;

}
}
void printsumcol(int arr[][4],int i,int j){
    for (int j=0;j<4;j++){
        int sum=0;
        for(int i  =0;i<3;i++){
            sum+=arr[i][j];
           
        }
        cout<<sum<<endl;

}
}
int main(){
    int arr[3][4]={3,5,22,5,245,24,5,5,4,555,4,54,};
    for (int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    printsumrow(arr,3,4);
    printsumcol(arr,3,4);
    largestrowsum(arr,3,4);
    


    return 0;
 }