class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Brute force approach
        //Linearly traverse the matrix and if encountered with a zero replace that row and column with -1
        //excpt for zero because it may modify other values also
        //Time : O(n*m)*(n+m)
        
        //Better solution:
        //We can maintain one dummy column array and a dummy row array
        //We will linearly traverse the array and if we get zero at any index we will set its dummy column as 
        // zero and dummy row as zero.
        //Then we will again traverse the matrix and whereever the dummy has zero values we will set that row and //column as zero
        
        //Efficient approach:
        //Instead of using two dummy arrays we can use it in the matrix only .
        
        int col0=true; //this variable is to see that we don't modify first row and column wrong
        int rows=matrix.size(),cols=matrix[0].size();
        
        for(int i=0;i<rows;i++){
            if(matrix[i][0]==0)col0=0; //we will check is first column element in every row is zero or not.
            //if it is zero set cols=false
            
            for(int j=1;j<cols;j++){ //traversing will start from second column always
                if(matrix[i][j]==0){
                    matrix[i][0]=matrix[0][j]=0;  //we will set both row and column as zero
                }
            }
        }
        
        //Now again we will traverse the matrix.But this time we will traverse from back
        for(int i=rows-1;i>=0;i--){
            for(int j=cols-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
            if(col0==0)matrix[i][0]=0;
        }
        
    }
};