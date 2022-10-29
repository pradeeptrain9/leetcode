class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>ans;
        
        for(int i=0;i<queries.size();i++)
        {
            for(int j=0;j<dictionary.size();j++)
            {
                int c=0;
                string temp=dictionary[j];
                for(int x=0;x<dictionary[j].size();x++)
                {
                    if(queries[i][x]!=temp[x])
                    {
                        if(c==2) break;
                        else
                        {
                            temp[x]=queries[i][x];
                            c++;
                        }
                    }
                    
                }
                if(queries[i].compare(temp)==0)
                {
                    ans.push_back(queries[i]);
                    break;
                }
            }
        }
        return ans;
    }
};