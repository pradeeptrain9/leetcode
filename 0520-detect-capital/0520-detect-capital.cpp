class Solution {
public:
    bool detectCapitalUse(string word) {
        int j=-1,n=word.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(isupper(word[i]))
            {
                c++;
                j=i;
            }
        }
        if(c==n) return true;
        
        if(c==1 && j==0) return true;
        
        if(c==0) return true;
        
        return false;
    }
};