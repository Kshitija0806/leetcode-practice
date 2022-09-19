class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Naive solution : Use a dummy matrix. Traverse the matrix and put first row in last column of matrix
        //Put second row in second last column of matrix
        
        int n = matrix.size();
  vector < vector < int >> rotated(n, vector < int > (n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      rotated[j][n - i - 1] = matrix[i][j];
    }
  }
  for(int i=0;i<matrix.size();i++){
      for(int j=0;j<matrix.size();j++){
          matrix[i][j]=rotated[i][j];
      }
  }
    }
};