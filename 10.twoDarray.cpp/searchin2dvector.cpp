class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

      
int s=0;
int row =matrix.size();
int col=matrix[0].size();
//this main logic in this code
//matrix[mid/col][mid%col]

int e=row*col-1;
    while(s<=e){
     
            int mid=s+(e-s)/2;
            if(matrix[mid/col][mid%col]==target){
                return true;

            }
            if(target>matrix[mid/col][mid%col]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            


        }
        return false;
    }
};