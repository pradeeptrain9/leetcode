class Solution {
public:
    string oddString(vector<string>& words) {
        vector<vector<int>>v(words.size());
        for(int i=0;i<words.size();i++)
        {
            vector<int>temp;
            for(int j=1;j<words[i].size();j++)
            {
                temp.push_back(words[i][j]-words[i][j-1]);
            }
            v[i]=temp;
        }
        for(int i=0;i<words.size();i++)
        {
            int count=0;
            for(int j=0;j<words.size();j++)
            {
                if(v[i]==v[j])count++;
            }
            if(count==1) return words[i];
        }
        return "";
    }
};