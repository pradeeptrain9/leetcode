class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>n || nums[i]<0) nums[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            int t=nums[i]%(n+1);
            if(t!=0)nums[t-1]+=(n+1);
            
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]<n+1) return i+1;
        }
        return n+1;
    }
};