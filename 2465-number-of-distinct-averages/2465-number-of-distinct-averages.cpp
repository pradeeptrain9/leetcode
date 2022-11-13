class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=0,e=nums.size()-1;
        unordered_map<float,int>mp;
        
        while(st<e)
        {
            float t=(float)(nums[st]+nums[e])/2.0;
            mp[t]++;
            st++;
            e--;
        }
        return mp.size();
    }
};