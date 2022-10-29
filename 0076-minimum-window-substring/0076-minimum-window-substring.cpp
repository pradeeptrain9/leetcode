class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map <char,int> mpp;
        for(int i=0;i<t.size();i++)
            mpp[t[i]]+=1;
        int count = mpp.size();
        int start,end,i=0,j=0;
        int length=0, min_length=INT_MAX;
        bool found=false;
        while(i<s.size())
        {
            //add
            if(mpp.find(s[i])!=mpp.end())
            {
                mpp[s[i]]-=1;
                if(mpp[s[i]]==0)
                    count--;
            }
            length++;
                i++;
            //add
            //removing
            while(j<s.size()&& (mpp.find(s[j])==mpp.end() || mpp[s[j]]<0 ))
            {
                if(mpp.find(s[j])!=mpp.end())
                {
                    mpp[s[j]]+=1;
                }
                j++;
                length--;
            }
            //removing
            //cout<<j<<" "<<i << endl;
            if(count==0)
            {
                found=true;
                if(length<min_length)
                {
                    min_length= min(length,min_length);
                    start=j;
                    end=i;
                }
            }
              
        }
        if(found==false) return"";
        else
        return s.substr(start,end-start);
    }
};