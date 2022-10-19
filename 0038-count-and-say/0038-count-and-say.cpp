class Solution {
public:
    string rec(int n,string cur)
        {
        if(n==0) return cur;
        int count =1;
        string ans="";
        for(int i=1;i<cur.size();i++)
            {
             if(cur[i]!=cur[i-1]) 
                 {
                 ans+=to_string(count);
                 ans+=cur[i-1];
                 count=1;
                 
             }
            else count++;
            }
        ans+=to_string(count);
        ans+=cur [cur.size()-1];
        return rec(n-1,ans);
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        string t="1";
        return rec(n-1,t);
    }
};