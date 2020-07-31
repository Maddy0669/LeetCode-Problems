class Solution {
public:
    int findComplement(int num) {
        int temp = (log2(num))+1;
        int key=pow(2,temp)-1;
        return num^key; 
    }
};