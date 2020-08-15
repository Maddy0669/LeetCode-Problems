class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        if(m==0) 
            return 0;
        
        if(m==n)
            return m;
        
        if(n-m==1)
            return m&n;
        
        if ((int)log2(m) != (int)log2(n))
            return 0;
    
        int res = m;
        for (int i=m+1; i<=n;i++)
            res &= i;
        return res;
        
    }
};