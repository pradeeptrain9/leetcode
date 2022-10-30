class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        unordered_map<string ,long long>mp,high;
        unordered_map<string,string>id;
        long long m=0;
        unordered_map<string,bool>vis;
        for(int i=0;i<creators.size();i++)
        {
            mp[creators[i]]+=(views[i]);
            m=max(m,mp[creators[i]]);
            if(high.find(creators[i])==high.end())
            {
                high[creators[i]]=views[i];
                id[creators[i]]=ids[i];
            }
            else if(high[creators[i]]<views[i])
            {
                high[creators[i]]=views[i];
                id[creators[i]]=ids[i];
            }
            else if(high[creators[i]]==views[i])
            {
                if(id[creators[i]].compare(ids[i])>0) id[creators[i]]=ids[i];
            }
        }
        vector<vector<string>>ans;
        for(int i=0;i<creators.size();i++)
        {
            if(mp[creators[i]]==m && vis[creators[i]]==false)
            {
                vector<string>temp;
                temp.push_back(creators[i]);
                temp.push_back(id[creators[i]]);
                vis[creators[i]]=true;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};