class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Naive solution : Use a dummy matrix. Traverse the matrix and put first row in last column of matrix
        //Put second row in second last column of matrix
        
  //       int n = matrix.size();
  // vector < vector < int >> rotated(n, vector < int > (n, 0));
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     rotated[j][n - i - 1] = matrix[i][j];
  //   }
  // }
  // for(int i=0;i<matrix.size();i++){
  //     for(int j=0;j<matrix.size();j++){
  //         matrix[i][j]=rotated[i][j];
  //     }
  // }
        
        //Efficient solution:
        //1. Take transpose of matrix
        //2. Then reverse each rows
        
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix.size();j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        
        
        
        //While taking transpose keep the upper-triangular matrix concept in mind.
        //While taking transpose the diagonal matrix don't change only the element on either side are swapped;
        
        //Now reverse individual rows
        
        for(int i=0;i<matrix.size();i++){
            int low=0,high=matrix.size()-1;
            while(low<=high){
                int temp=matrix[i][low];
                matrix[i][low]=matrix[i][high];
                matrix[i][high]=temp;
                low++;
                high--;
            }
        }
        
    }
};