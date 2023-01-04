class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>nums;
        for(auto exp : tokens)
        {
            if(exp.size()==1 && (exp[0]=='+' || exp[0]=='-' || exp[0]=='/' || exp[0]=='*'))
            {
                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();
                if(exp[0]=='+') nums.push(first+second);
                else if(exp[0]=='-') nums.push(first-second);
                else if(exp[0]=='/') nums.push(first/second);
                else nums.push(first*second);
            }
            else nums.push(stoi(exp));
        }
        
        return nums.top();
    }
};