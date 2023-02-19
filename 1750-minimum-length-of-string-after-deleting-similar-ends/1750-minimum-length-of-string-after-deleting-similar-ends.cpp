class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int st=0,end=n-1;
        
        while(st<end)
        {
            if(s[st]==s[end])
            {
                char c=s[st];
                while(st<n && s[st]==c) st++;
                while(end>=0 && s[end]==c) end--;
            }
            else break;
        }
        
        return max(0,end-st+1);
    }
};