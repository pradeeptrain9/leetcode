class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>mp;
        map<string,char>mp2;
        vector<string>v;
        string t="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                v.push_back(t);
                t="";
            }
            else
            {
                t+=s[i];
            }
        }
          v.push_back(t);
        
        if(pattern.length()!=v.size())
            return false;
        for(int i=0;i<pattern.length();i++)
        {
            if(mp.find(pattern[i])==mp.end())
                mp[pattern[i]]=v[i];
            else if(mp[pattern[i]]!=v[i])
                return false;
        }
         for(int i=0;i<v.size();i++)
        {
            if(mp2.find(v[i])==mp2.end())
                mp2[v[i]]=pattern[i];
            else if(mp2[v[i]]!=pattern[i])
                return false;
        }
        return true;
    }
};