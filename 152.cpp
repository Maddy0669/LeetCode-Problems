class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        
        int dp1[n];
        int dp2[n];
        
        dp1[n-1]=nums[n-1];
        dp2[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            dp1[i]= max(nums[i], max(nums[i]*dp1[i+1], nums[i]*dp2[i+1]));
            dp2[i]= min(nums[i], min(nums[i]*dp1[i+1], nums[i]*dp2[i+1]));  
        }
        int mx=INT_MIN;
        
        for(int i=0;i<n;i++){
            mx = max(mx,dp1[i]);
            mx = max(mx,dp2[i]);
        }
        return mx;
    }
};