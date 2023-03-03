class Solution {
public:
    bool isSubsequence(string s, string t) {
        int smol = s.size();
        int longe = t.size();
        int i = 0;
        for(int j = 0;j<longe and i<smol;j++)
        {
            if(s[i]==t[j])
            {
                i++;
            }
        }
        return (i==smol);
    }
};