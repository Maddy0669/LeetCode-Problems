class Solution {
public:
    int nthUglyNumber(int n) {
        int arr[n];
        arr[0]=1;
        int x=1,y=1,z=1;
        int mul2=2,mul3=3,mul5=5;
        int ugly=1;
        for(int i=1;i<n;i++){
            ugly=min(mul2,min(mul3,mul5));
            arr[i]=ugly;
            if(ugly==mul2)
                mul2=arr[x++]*2;
            if(ugly==mul3)
                mul3=arr[y++]*3;
            if(ugly==mul5)
                mul5=arr[z++]*5;
        }
        
        return ugly;
    }
};