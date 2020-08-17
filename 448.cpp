class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int temp=abs(nums[i])-1;
            if(nums[temp]>0)
                nums[temp]*=-1;
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]>0)
                ans.push_back(i+1);
        }
        return ans;
    }
};