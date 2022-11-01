class Solution {
public:
    int longestValidParentheses(string s) {
       stack<pair<char,int>>st;
        vector<int>index(s.size(),0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push({s[i],i});
            }
            else
            {
                if(!st.empty())
                {
                    index[i]=1;
                    index[st.top().second]=1;
                    st.pop();
                }
                
            }
            
        }
        int ans=0,count=0;
        for(int i=0;i<s.size();i++)
        {
            if(index[i])
            {
                count++;
                ans=max(ans,count);
            }
            else count=0;
        }
        return ans;
    }
};