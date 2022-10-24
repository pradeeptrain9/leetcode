class Solution {
public:
    void sol(int ind, vector<string>&arr, vector<string>&temp, int &res)
   {
      if(ind == arr.size())
      {   
          string s = "";
          vector<int>v(26,0);
          int flag = 0;

          for(auto &it : temp) s += it;
  
          for(auto &it : s)
          {
            v[it-'a']++;
            if(v[it-'a']>1) return;
          } 

          res = max(res,accumulate(v.begin(),v.end(),0));
          return ;
          
      }
      temp.push_back(arr[ind]);
      sol(ind+1,arr,temp,res);
      temp.pop_back();
      sol(ind+1,arr,temp,res);
      
   }


    int maxLength(vector<string>& arr) {
        
        vector<string>temp;
        int ind = 0;
        int res = 0;
        sol(ind,arr,temp,res);
        return res;
         
    }
};