class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ans = (s+s);
        string modified = ans.substr(1,s.size()*2-2);
        return (modified.find(s) != -1);     
        
    }
};