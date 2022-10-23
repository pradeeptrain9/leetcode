class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k==0) return false;
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=1;i<nums.size();i++)
        {
            //cout<<v[i].second<<" "<<v[i-1].second<<" ";
            if(v[i].first==v[i-1].first && (abs(v[i].second-v[i-1].second)<=k)) return true;
        }
        return false;
    }
};