class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>>arr;
        for(int i = 0;i < plantTime.size();i++){
            arr.push_back(make_pair(growTime[i],plantTime[i]));
        }
        sort(arr.begin(),arr.end(),greater<pair<int,int>>());
        // for(auto it : arr){
        //     cout << it.first << " " << it.second << endl;
        // }
        int day = 0,ans = 0;
        for(int i = 0;i < arr.size();i++){
            day += arr[i].second;
            ans = max(day+arr[i].first,ans);
            // cout << ans << endl;
        }
        
        return ans;
    }
};