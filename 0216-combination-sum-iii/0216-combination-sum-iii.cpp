class Solution {
public:
    set<vector<int>>ans;
    int N;
    void helper(int curSum, int digit, vector<int>temp, int k)
    {
        if(temp.size()==k)
        {
            if(curSum==N) ans.insert(temp);
            return;
        }
        if(digit<1) return;
        curSum+=digit;
        temp.push_back(digit);
        helper(curSum,digit-1,temp,k);
        temp.pop_back();
        curSum-=digit;
        helper(curSum,digit-1,temp,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        N=n;
        vector<int>temp;
        helper(0,9,temp,k);
        vector<vector<int>>res;
        for (auto comb : ans) res.push_back(comb);
        
        return res;
    }
};