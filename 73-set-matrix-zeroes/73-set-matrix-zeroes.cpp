class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       //Brute force approach: Assuming that the matrix contains non-negative elements
        
        //1. Traverse the matrix and if we find any zero then change all elements in its row and column to -1
        //except the zeroes. not changing zero as it may affect other rows and columns
        
        //2. Again traverse the matrix and set all -1 to zeroes
        
        int rows=matrix.size();
        int cols=matrix[0].size();
        
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 if(matrix[i][j]==0){
//                     for(int k=0;k<cols;k++){
//                         if(matrix[i][k]!=0)matrix[i][k]=-1;
//                     }
                    
//                     for(int k=0;k<rows;k++){
//                         if(matrix[k][j]!=0)matrix[k][j]=-1;
//                     }
//                 }
//             }
//         }
        
        
//         for(int i=0;i<rows;i++){
//             for(int j=0;j<cols;j++){
//                 if(matrix[i][j]==-1){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
        
//         Time complexity: O((N*M)*(N+M)
//                            N*m - for traversing through matrix
//                            N+M - for traversing individual rows and columns
        
        //Better solution: To use dummmy arrays
        
       vector < int > dummy1(rows,-1), dummy2(cols,-1);
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    dummy1[i]=0;
                    dummy2[j]=0;
                }
            }
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(dummy1[i]==0 || dummy2[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};