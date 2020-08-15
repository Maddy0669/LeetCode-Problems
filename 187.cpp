class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        int n=s.size();
        vector<string> ans;
        
        if(n<10)
            return ans;
        
        for(int i=0;i<=n-10;i++){
            string str=s.substr(i,10);
            mp[str]++;
        }
        for(auto x:mp){
            if(x.second>1)
                ans.push_back(x.first);
        }
        return ans;
    }
};