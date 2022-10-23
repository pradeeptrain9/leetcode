class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        sort(nums.begin(),nums.end());
        sort(target.begin(),target.end());
        int i=0,n=nums.size(),j=0;
        long long ans=0,sum=0;
        while(i<n && j<n)
        {
            //ut<<i<<' '<<j<<' ';
            while(i<n && nums[i]%2==0)i++;
            while(j<n && target[j]%2==0)j++;
            if(i==n || j==n) break;
            int d=nums[i]-target[j];
            if(d>0) ans+=(d/2);
            sum+=d;
            i++;
            j++;
        }
        i=0,j=0;
        while(i<n && j<n)
        {
            //ut<<i<<' '<<j<<' ';
            while(i<n && nums[i]%2!=0)i++;
            while(j<n && target[j]%2!=0)j++;
            if(i==n || j==n) break;
            int d=nums[i]-target[j];
            if(d>0)ans+=(d/2);
            i++;
            j++;
        }
        //ans-=(abs(sum/2));
        return ans;
    }
};