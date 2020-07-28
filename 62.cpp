class Solution {
public:
    int uniquePaths(int m, int n) {
        int arr[m][n];
        for(int i=m-1;i>=0;i--)
            arr[i][n-1]=1;
        for(int i=n-1;i>=0;i--)
            arr[m-1][i]=1;
        
        for(int i=m-2;i>=0;i--)
            for(int j=n-2;j>=0;j--)
                arr[i][j]=arr[i+1][j]+arr[i][j+1];
        
        return arr[0][0];
    }
};