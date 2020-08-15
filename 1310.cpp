class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        int n=arr.size();
        for(int i=1;i<n;i++)
            arr[i]=arr[i]^arr[i-1];
        
        vector<int> ans;
        int N=q.size();
        
        for(int i=0;i<N;i++){
            int a=q[i][0];
            int b=q[i][1];
            
            int temp=arr[b];
            if(a>0)
                temp=temp^arr[a-1];
            ans.push_back(temp);
        }
        return ans;
    }
};