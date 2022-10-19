class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> cnt;
        int n = (words).size();
        
        for(int i=0;i < n;i++){
            cnt[words[i]]++;
        }
        
        priority_queue<pair<int,string>> pq;
        
        for(auto i:cnt){
            pq.push({-i.second,i.first});
            if(pq.size() > k){
                pq.pop();
            }
        }
        
        vector<string> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};