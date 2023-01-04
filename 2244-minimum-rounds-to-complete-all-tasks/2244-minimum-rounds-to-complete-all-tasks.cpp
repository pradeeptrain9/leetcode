class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        sort(tasks.begin(),tasks.end());
        int c=1,ans=0;
        for(int i=1;i<tasks.size();i++)
        {
            if(tasks[i]!=tasks[i-1])
            {
                
                if(c==1) return -1;
                else if(c%3==0) ans+=(c/3);
                else ans+=((c/3)+1);
                c=1;
                //cout<<ans<<" ";
            }
            else c++;
        }
        
        if(c==1) return -1;
        
        else if(c%3==0) ans+=(c/3);
        else ans+=((c/3)+1);
        //cout<<ans<<" ";
        return ans;
    }
};