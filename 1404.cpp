class Solution {
public:
    int numSteps(string s) {
        if(s == "1") return 0;
        
        int i, j, n = s.length(), b0 = 0, c1 = 0;
        for(i = j = 0; i < n; ++i) {
            if(s[i] == '0') j++;
            else {
                c1++;
                b0 += j;
                j = 0;
            }
        }
        if(c1 == 1)
            return n-1;
        return b0+n+1;
    }
};
