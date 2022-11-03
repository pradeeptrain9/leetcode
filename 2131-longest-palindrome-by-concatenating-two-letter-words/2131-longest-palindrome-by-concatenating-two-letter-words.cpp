class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int ans=0;
        unordered_map<string,int>mp;
        for(int i=0;i<words.size();i++) mp[words[i]]++;
        
        bool ch=false;
        for(int i=0;i<words.size();i++)
        {
            if(words[i][0]==words[i][1])
            {
                if(mp[words[i]]%2==0) ans+=(mp[words[i]])*2;
                else
                {
                    ans+=(mp[words[i]]-1)*2;
                    ch=true;
                }
                mp[words[i]]=0;
            }
            else if(mp[words[i]])
            {
                string temp=words[i];
                reverse(temp.begin(),temp.end());
                if(mp[temp]>0)
                {
                    ans+=4;
                    mp[temp]--;
                }
                mp[words[i]]--;
            }
            
        }
        if(ch) ans+=2;
        
        return ans;
    }
};