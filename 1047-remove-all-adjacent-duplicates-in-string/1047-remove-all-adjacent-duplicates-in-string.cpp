class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty()) st.push(s[i]);
            else
            {
                int c=0;
                while(!st.empty() && st.top()==s[i])
                {
                    st.pop();
                    c++;
                }
                if(c!=0) continue;
                st.push(s[i]);
            }
        }
        string ans="";
        for(;!st.empty();ans+=st.top(),st.pop());
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};