class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),1);
        int n=nums.size(),prod1=1,i;
        for(i=n-2;i>=0;i--)
            ans[i]=ans[i+1]*nums[i+1];
        for(i=1;i<n;i++){
            prod1*=nums[i-1];
            ans[i]=prod1*ans[i];
        }
        return ans;
    }
};