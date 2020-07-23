class Solution {
    void generateParenthesisUtil(int L, int R, string &str, vector<string> &ans){
        if(!L and !R){
            ans.push_back(str);
            return;
        } 
        if(L){
            str += "(";
            generateParenthesisUtil(L - 1, R, str, ans);
            str.pop_back();
        }   
        if(R > L){
            str += ")";
            generateParenthesisUtil(L, R - 1, str, ans);
            str.pop_back();
        }
    }  
public:
    vector<string> generateParenthesis(int n) {
        vector<string> allCombinations;
        string str;
        generateParenthesisUtil(n, n, str, allCombinations);
        return allCombinations;
    }
};