class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<int, int>count;
    for (auto c : s) {
        count[c]++;
    }
        priority_queue<pair<int,int>>pq;
        for(auto i:count)
        {
            pq.push({i.second,i.first});
        }
        string ans;
        
        pair<int,int>top1st,top2nd;
        while(!pq.empty())
        {
            top1st = pq.top();
            pq.pop();
            ans+=top1st.second;
            if(!pq.empty())
            {
                ans+=pq.top().second;
                top2nd = pq.top();
                pq.pop();
                
                if(top2nd.first>1)
                {
                    pq.push({top2nd.first-1,top2nd.second});
                }
                
            }
            if(top1st.first>1)
                {
                    pq.push({top1st.first-1,top1st.second});
                }
        }
        for(int i = 0;i<ans.size();i++)
        {
            if(ans[i]==ans[i+1])
                return "";
        }

            return ans;
    }
};