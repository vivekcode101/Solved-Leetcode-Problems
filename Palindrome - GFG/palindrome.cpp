//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int v = n;
		    int ans = 0;
		    // Code here.
		    while(v>0)
		    {
		        
		        ans = ans*10+v%10;
		        v=v/10;
		        
		    }
		   if(n == ans)
		   {
		       return "Yes";
		   }
		   else
		   return "No";
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends