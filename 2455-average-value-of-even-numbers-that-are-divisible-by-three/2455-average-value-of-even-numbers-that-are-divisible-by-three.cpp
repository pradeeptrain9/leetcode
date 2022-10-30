class Solution {
public:
    int averageValue(vector<int>& nums) {
        int c=0,sum=0;
        for(int i :nums)
        {
            if(i%6==0)
            {
                sum+=i;
                c++;
            }
        }
        if(c==0) return 0;
        //cout<<sum<<" "<<c;
        int ans=sum/c;
        // if(c%2!=0)
        // {
        //     if(sum%c>(c/2)) ans++;
        // }
        // else
        // {
        //     if(sum%c>=(c/2))ans++;
        // }
        return ans;
    }
};