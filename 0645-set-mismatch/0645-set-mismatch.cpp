class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2, 0);

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[abs(nums[i])-1] < 0)
            {
                ans[0] = abs(nums[i]);
            }
            nums[abs(nums[i])-1] *= -1; 
            ans[1] ^= abs(nums[i]);
            ans[1] ^= i+1;
        }

        ans[1] = ans[1]^ans[0];

        return ans;
    }
};