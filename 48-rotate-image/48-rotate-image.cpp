class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Naive solution:
        //Use an auxiliary matrix and make first row as last column, second row as second last column and so on.
        
        //Efficient solution:
        //1.Take transpose of the matrix.
        //2.then reverse individual rows one by one
        
        //For finding transpose of a matrix we use the upper triangular matrix trick
        //In a matrix will finding a transpose the diagonal elements never change. Only the element 
        //above and below it are swapped
        
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        //Now reversing individual rows
        for(int i=0;i<matrix.size();i++){
            int low=0,high=matrix[0].size()-1;
            while(low<high){
                swap(matrix[i][low],matrix[i][high]);
                low++;
                high--;
                }
        }
    }
};