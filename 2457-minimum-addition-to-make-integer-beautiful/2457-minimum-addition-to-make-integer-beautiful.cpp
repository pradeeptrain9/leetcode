class Solution {
public:
    long long makeIntegerBeautiful(long long n, int target) {
        int sum=0;
        vector<int>v(14,-1);
        int c=0;
        while(n)
        {
            int r=n%10;
            sum+=r;
            v[c]=r;
            n=n/10;
            c++;
        }
        long long ans=0;
        if(sum<=target) return 0;
        long long ten=1;
        long long prev=0;
        for(int i=0;i<13;i++)
        {
            if(sum<=target) break;
            if(v[i]==-1) break;
            if(v[i]==0)
            {
                ten=ten*10;
                prev=0;
                continue;
            }
            int t=10-v[i];
            v[i+1]++;
            ans+=(t*ten);
            sum-=v[i];
            sum++;
            ten=ten*10;
        }
        return ans;
    }
};