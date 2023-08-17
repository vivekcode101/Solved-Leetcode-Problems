// class Solution {
// public:
//     int checkzero(vector<vector<int>>& mat, int x, int y) {
//         int rows = mat.size();
//         int cols = mat[0].size();
//         int minDist = INT_MAX;

        
//         if (x > 0) {
//             minDist = min(minDist, mat[x - 1][y]);
//         }

       
//         if (x < rows - 1) {
//             minDist = min(minDist, mat[x + 1][y]);
//         }

        
//         if (y > 0) {
//             minDist = min(minDist, mat[x][y - 1]);
//         }

        
//         if (y < cols - 1) {
//             minDist = min(minDist, mat[x][y + 1]);
//         }

//         return minDist == INT_MAX ? INT_MAX : minDist + 1;
//     }

//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int rows = mat.size();
//         int cols = mat[0].size();
//         vector<vector<int>> ans(rows, vector<int>(cols));

//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < cols; j++) {
//                 if (mat[i][j] == 0) {
//                     ans[i][j] = 0;
//                 } else {
//                     ans[i][j] = checkzero(mat, i, j);
//                 }
//             }
//         }

//         return ans;
//     }
// };


class Solution {
public:
    
    
    bool isvalid(int i,int j,int m,int n)
    {
        if(i==m||j==n||j<0||i<0)
            return false;
        return true;
    }
    
    vector<vector<int>> dir={{1,0},{0,1},{0,-1},{-1,0}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) 
    {
        queue<pair<int,int>> q;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> dis(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                { 
                    q.push({i,j});
                    dis[i][j]=0;
                }
            }
        while(!q.empty())
        {
            pair<int,int> curr=q.front();
            q.pop();
            for(auto& x:dir)
            {
                int a=curr.first+x[0];
                int b=curr.second+x[1];
                if(isvalid(a,b,m,n)&&dis[a][b]==-1)
                {
                    q.push({a,b});
                    dis[a][b]=dis[curr.first][curr.second]+1;
                }
            }
        }
        return dis;
    }
};