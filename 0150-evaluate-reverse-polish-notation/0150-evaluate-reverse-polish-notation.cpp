class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto x:tokens)
        {
            
            if( x.size()==1 && (x[0]=='+' || x[0]=='-' || x[0]=='/' || x[0]=='*'))
            {
                int first = s.top();
                s.pop();
                int second = s.top();
                s.pop();
                if(x[0]=='+') s.push(first+second);
                else if(x[0]=='-') s.push(second-first);
                else if(x[0]=='*') s.push(second*first);
                else s.push(second/first);
            }
            else 
            {
                s.push(stoi(x));
            } 
               //cout<<"x";  
           }
        return s.top();
    }
};