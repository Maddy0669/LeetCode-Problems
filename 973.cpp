class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int K) {
        
        int n=p.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
       
        for(int i=0;i<n;i++)
            pq.push({p[i][0]*p[i][0]+p[i][1]*p[i][1],i});
        
        vector<vector<int>> ans;
        while(ans.size()<K){
            ans.push_back(p[pq.top().second]);
            pq.pop();
        }
        return ans;
        
    }
};