unordered_map<string,int> m;


bool compare(string p1, string p2){
    if(m[p1]==m[p2])
        return p1<p2;
    return m[p1]>m[p2];
}

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        
        int n=words.size();
        for(int i=0;i<n;i++)
            mp[words[i]]++;
        vector<string> ans;
        
        priority_queue<pair<int,string>> q;
        
        
        for(auto x:mp)
            q.push({x.second,x.first});
        int i=0;
        while(!q.empty()){
            m[q.top().second]=q.top().first;
            ans.push_back(q.top().second);
            q.pop();
        }
        sort(ans.begin(),ans.end(),compare);
        
        int len=ans.size();
        len=len-k;
        while(len--)
            ans.pop_back();
        
        return ans;
    }
};