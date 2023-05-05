class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int n=s.size();
        if(k>n) return 0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                count++;
            }
        }
        int ans=count;
        int st=0;
        for(int i=k;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                count++;
            }
            if(s[st]=='a' || s[st]=='e' || s[st]=='i' || s[st]=='o' || s[st]=='u')
            {
                count--;
            }
            st++;
            ans=max(ans,count);
        }
        
        return ans;
    }
};