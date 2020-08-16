class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        int sum=0;
        
        for(int i=0;i<n;i++)
            sum+=nums[i];
        cout<<sum<<endl;
        int count1,count2,case1,case2;
        if(sum%3==1){
            count1=0;
            count2=0;
            case1=0;
            case2=0;
            for(int i=0;i<n;i++){
                if(nums[i]%3==1 and count1!=1){
                    count1++;
                    case1+=nums[i];
                }
                if(nums[i]%3==2 and count2!=2){
                    count2++;
                    case2+=nums[i];
                }
            }     
            
            if(case1==0 or count1!=1)
                case1=INT_MAX;
            if(case2==0 or count2!=2)
                case2=INT_MAX;
            sum-=min(case1,case2);
        }
        if(sum%3==2){
            count1=0;
            count2=0;
            case1=0;
            case2=0;
            for(int i=0;i<n;i++){
                if(nums[i]%3==2 and count1!=1){
                    count1++;
                    case1+=nums[i];
                }
                if(nums[i]%3==1 and count2!=2){
                    count2++;
                    case2+=nums[i];
                }
            }     
            
            if(case1==0 or count1!=1)
                case1=INT_MAX;
            if(case2==0 or count2!=2)
                case2=INT_MAX;
            sum-=min(case1,case2);
        }
        return sum;
    }
};