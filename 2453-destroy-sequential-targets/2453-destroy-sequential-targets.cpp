class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]%space]++;
        }
        int ans=0,res=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            //cout<<nums[i]<<" "<<mp[nums[i]]<<" ";
            if(mp[nums[i]%space]>ans)
            {
                res=nums[i];
                ans=mp[nums[i]%space];
            }
        }
        return res;
    }
};