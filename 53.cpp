class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        
        int cur=0;
        int sum=INT_MIN;
        
        for(int i=0;i<n;i++){
            cur+=nums[i];
            if(cur>sum)
                sum=cur;
            if(cur<0)
                cur=0;
        }
        return sum;
    }
};