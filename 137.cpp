class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long int n=nums.size();
        long long int j,ans[64]={0};
        for(int i=0;i<n;i++){
            long long int temp=abs(nums[i]);
            j=0;
            while(temp>0){
                if(temp&1)
                    ans[j]++;
                j++;
                temp=temp>>1;
            }
        }
        long long int p=0,res=0;
        for(int i=0;i<64;i++){
            ans[i]%=3;
            if(ans[i]==1)
                res=res+pow(2,p);
            p++;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==res)
                count++;
        }
        if(count==1)
            return res;
        else 
            return -1*res;
    }
};