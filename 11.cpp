class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=min(height[0],height[n-1])*(n-1-0);
        int i=0,j=n-1;
        while(i<j){
            int temp=min(height[i],height[j])*(j-i);
            if(temp>ans)
                ans=temp;
            if(height[i]>height[j])
                j--;
            else 
                i++;
        }
        return ans;
    }
};