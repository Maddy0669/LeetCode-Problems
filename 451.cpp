    unordered_map<char,int> mp;
    bool compare(char a, char b){
        if(mp[a]==mp[b])
            return a<b;
        else
            return mp[a]>mp[b];
    }
class Solution {
public:

    string frequencySort(string s) {
        
        mp.clear();
        int n=s.size();
        
        for(int i=0;i<n;i++)
            mp[s[i]]++;
    
        sort(s.begin(),s.end(),compare);
        
        return s;
    }
};