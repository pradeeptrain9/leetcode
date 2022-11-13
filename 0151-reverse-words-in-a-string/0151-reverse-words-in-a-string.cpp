class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string temp="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                if(temp.size()) st.push(temp);
                temp="";
            }
            else temp+=s[i];
        }
        if(temp.size()) st.push(temp);
        string ans="";
        while(!st.empty())
        {
            temp=st.top();
            st.pop();
            if(st.empty()) ans+=temp;
            else 
            {
                ans+=temp;
                ans+=' ';
            }
        }
        return ans;
    }
};