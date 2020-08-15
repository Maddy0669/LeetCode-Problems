class Solution {
public:
    vector<vector<int>> ans;
    
    void ss(vector<int> &nums, vector<int> &curr, int i){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }
        ss(nums,curr,i+1);
        curr.push_back(nums[i]);
        ss(nums,curr,i+1);
        curr.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int i=0;
        vector<int> curr;
        ss(nums, curr, i);
        return ans;
    }
};