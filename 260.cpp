class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size(),temp=0;
        
        for(int i=0;i<n;i++){
            temp=temp^abs(nums[i]);
        }
        //cout<<temp<<endl;
        int p=0;
        while(temp>0){
            if(temp&1)
                break;
            p++;
            cout<<p<<endl;
            temp=temp>>1;
        }
        temp=1<<p;
        //cout<<temp<<endl;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(abs(nums[i])&temp){
                x=x^abs(nums[i]);
                //cout<<"x :"<<x<<endl;
            }
            else{
                y=y^abs(nums[i]);            
                //cout<<"y :"<<y<<endl;
            }
        }
        vector <int> res;
        int flag=0;
        for(int i=0;i<n;i++){
            if(x==nums[i])
                flag=1;    
        }
        if(flag)
            res.push_back(x);
        else
            res.push_back((-1*x));
        
        flag=0;
        for(int i=0;i<n;i++){
            if(y==nums[i])
                flag=1;    
        }
        if(flag)
            res.push_back(y);
        else
            res.push_back((-1*y));
        
        return res;
    }
};