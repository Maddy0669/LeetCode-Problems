class Solution {
public:
    int integerReplacement(int n) {
        long long int num=n;
        if(n==2)
            return 1;
        if(n==3)
            return 2;
        int op=0;
        while(num>1){
            if(num%2==0)
                num/=2;
            else{
                int t=(num-1)/2;
                if(t%2==0)
                    num--;
                else
                    num++;    
            }
            if(num==3)
                return op+3;
            op++;            
        }
        return op;        
    }
};