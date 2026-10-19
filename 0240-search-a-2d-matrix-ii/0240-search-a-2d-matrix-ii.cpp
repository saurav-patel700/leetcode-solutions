class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows =matrix.size();
        int cols=matrix[0].size();
        int i=0,j=cols-1;
        while(i<=rows-1 && j>=0){
            if(matrix[i][j]==target) return true;
            else if (matrix[i][j]>target) j--;
            else i++;
        }
        return false;
    }
};
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m=matrix.size();
//         int n=matrix[0].size();

//         int l=0,r=m*n-1;
//         while(l<=r){
//             int mid=l+(r-l)/2;
//             int rows=mid/n;
//             int colm=mid%n;
//             if(matrix[rows][colm]==target){
//                 return true;
//             }
//             else if(matrix[rows][colm]<target){
//                 l=mid+1;
//             }
//             else r=mid-1;
//         }
//         return false;
//     }
// };