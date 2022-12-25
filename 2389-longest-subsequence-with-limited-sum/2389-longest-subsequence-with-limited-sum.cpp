class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int m=queries.size(),n=nums.size();
        vector<int>ans(m,0),pre(n,0);
        sort(nums.begin(),nums.end());
        int sum=0;;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            pre[i]=sum;
        }
        // cout<<"kasa";
        for(int i=0;i<m;i++)
        {
            int k=(lower_bound(pre.begin(),pre.end(),queries[i])-pre.begin());
            if(k==n)
            {
                ans[i]=k;
                continue;
            }
            if(pre[k]==queries[i])ans[i]=k+1;
            else ans[i]=k;
        }
        cout<<"kasa";
        
        return ans;
    }
};