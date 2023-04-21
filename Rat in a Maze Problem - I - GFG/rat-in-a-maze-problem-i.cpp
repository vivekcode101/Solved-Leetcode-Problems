//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
    
    bool issafe(vector<vector<int>> &visited,int srcx,int srcy,int n,vector<vector<int>> &m)
    {
        if((srcx>=0 && srcy<n) && (srcy>=0 && srcx<n) && (visited[srcx][srcy]==0) && (m[srcx][srcy]==1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    void solve(vector<vector<int>> &m,vector<vector<int>> &visited,int srcx,int srcy,string path,vector<string> &ans,int n)
    {
        //if base case is reached
        if(srcx==n-1 && srcy==n-1)
        {
            ans.push_back(path);
        }
        visited[srcx][srcy]=1;
        
        //for down
        int newx = srcx+1;
        int newy = srcy;
        if(issafe(visited,newx,newy,n,m))
        {
            path.push_back('D');
            solve(m,visited,newx,newy,path,ans,n);
            path.pop_back();
        }
        //for up
         newx = srcx-1;
         newy = srcy;
        if(issafe(visited,newx,newy,n,m))
        {
            path.push_back('U');
            solve(m,visited,newx,newy,path,ans,n);
            path.pop_back();
        }
        //for left
         newx = srcx;
         newy = srcy-1;
        if(issafe(visited,newx,newy,n,m))
        {
            path.push_back('L');
            solve(m,visited,newx,newy,path,ans,n);
            path.pop_back();
        }
        //for right
        newx = srcx;
        newy = srcy+1;
        if(issafe(visited,newx,newy,n,m))
        {
            path.push_back('R');
            solve(m,visited,newx,newy,path,ans,n);
            path.pop_back();
        }
        visited[srcx][srcy]=0;
    }
    
    public:
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<int>> visited = m;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                visited[i][j]=0;
            }
        }
        int srcx=0;
        int srcy=0;
        if(m[0][0]==0)
        {
            return ans;
        }
        string path = "";
        solve(m,visited,srcx,srcy,path,ans,n);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends