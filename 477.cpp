class Solution {
public:
    int totalHammingDistance(vector<int>& A) {
        
        long long bits[32], m = (int)(1e9+7);
        memset(bits,0,sizeof bits);
    
        for(int i = 0; i < 32; i++){
            for(int j = 0; j < (int)A.size(); j++){
                if(A[j]&(1 << i)) bits[i]++;
            }
        }
        long long ans = 0, n = A.size();
        for(int i = 0; i < 32; i++){
            ans += (bits[i]*(n-bits[i]))%m;
        }
        return (ans)%m;
    }
};