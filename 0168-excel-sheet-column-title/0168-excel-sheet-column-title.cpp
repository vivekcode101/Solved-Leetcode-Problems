class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        int n = columnNumber;
        while(n>0)
        {
            n--;
            int curr = n%26;
            ans.push_back(curr+'A');
            n=n/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};