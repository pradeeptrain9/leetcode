class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long ans=*max_element(nums.begin(),nums.end());
        long st=0,e=ans;
        while(st<=e)
        {
            long mid=(st+e)/2;
            //cout<<mid<<" ";
            long dec=0;
            for(int i=nums.size()-1;i>=0;i--)
            {
                if(mid<nums[i]+dec)
                {
                    dec=(nums[i]+dec)-mid;
                }
                else dec=0;
            }
            if(dec==0)
            {
                ans=min(ans,mid);
                e=mid-1;
            }
            else st=mid+1;
        }
        
        return ans;
        
    }
};