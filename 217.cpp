class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans[nums[i]]=0;
        }
        for(int i=0;i<n;i++){
            ans[nums[i]]++;
        }
        for (auto x : ans) 
            if(x.second>1)
                return true;
        return false;
    }
};