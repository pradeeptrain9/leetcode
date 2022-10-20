class Solution {
public:
    
    int n;
    
    void append(string &ans, int x, string symbol) {
        const int TIMES = n / x;
        for(int i = 0; i < TIMES ; ++i) {
            ans += symbol;
            n -= x;
        }
    }
    
    string intToRoman(int num) {
        
        n = num;
        
        string ans = "";
        
        append(ans, 1000, "M");
        append(ans, 900, "CM");
        append(ans, 500, "D");
        append(ans, 400, "CD");
        append(ans, 100, "C");
        append(ans, 90, "XC");
        append(ans, 50, "L");
        append(ans, 40, "XL");
        append(ans, 10, "X");
        append(ans, 9, "IX");
        append(ans, 5, "V");
        append(ans, 4, "IV");
        append(ans, 1, "I");
        
        return ans;
        
    }
};