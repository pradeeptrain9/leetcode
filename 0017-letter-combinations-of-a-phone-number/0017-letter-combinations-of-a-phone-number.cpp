class Solution {
public:
    vector<string> letterCombinations(string digits) {
         vector<string> ans(1, ""), ans2;
	    string p[10];
        int dgs = digits.size();
	    p[9] = "wxyz"; p[2] = "abc"; p[3] = "def";
	    p[4] = "ghi"; p[5] = "jkl"; p[6] = "mno";
	    p[7] = "pqrs"; p[8] = "tuv";
	    for (int i = 0; i < dgs; ++i)
		    for (int j = 0; j < p[digits[i] - '0'].size(); ++j)
			    for (int k = 0; k < ans.size(); ++k)
				    if (ans[k].size() == i)
                    {
                        if (i + 1 == dgs)
                            ans2.push_back(ans[k] + p[digits[i]-'0'][j]);
                        else
			    		    ans.push_back(ans[k] + p[digits[i]-'0'][j]);
                    }
        return ans2;
    }
};