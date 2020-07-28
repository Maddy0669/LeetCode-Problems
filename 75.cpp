class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int t=0;
        while(t<=j){
            if(nums[t]==2){
                nums[t]=nums[j];
                nums[j]=2;
                j--;
            }
            else if(nums[t]==0){
                nums[t]=nums[i];
                nums[i]=0;
                i++;
                t++;
            }
            else
                t++;
        }
    }
};