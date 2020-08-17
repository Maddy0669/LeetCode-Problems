class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        
        for(int i=n-1;i>=0;i--){
            int j=0;
            int k=i-1;
            while(j<k){
                if(nums[j]+nums[k]+nums[i]==0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    s.insert(temp);
                    j++;
                    k--;
                }
                else if(nums[j]+nums[k]+nums[i]<0)
                    j++;
                else
                    k--;    
            }
        }
        
        for(auto x:s){
            ans.push_back(x);
        }
        
        return ans;
    }
};