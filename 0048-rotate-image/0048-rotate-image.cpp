class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int temp;
        //transpose
        for(int i = 0; i<row;i++)
        {
            for(int j = 0;j<i;j++)
            {
                temp = matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        //vertical reflection
        for(int i = 0;i<row;i++)
        {
            for(int j =0;j<row/2;j++)
            {
                temp = matrix[i][j];
                matrix[i][j]=matrix[i][row-1-j];
                matrix[i][row-1-j]=temp;
            }
        }
    }
};