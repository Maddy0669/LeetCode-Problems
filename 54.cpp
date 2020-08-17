class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;
        int m=arr.size();
        if(m==0)
            return ans;
        
        int n=arr[0].size();
        
        int sr=0,sc=0,er=m-1,ec=n-1,count=0;
	    
        
        
	    while(sr<=er and sc<=ec){
	        for(int i=sc;i<=ec;i++){
	            count++;
	            ans.push_back(arr[sr][i]);
	        }
	        sr++;
	        if(count>=m*n)
	            break;
	            
	        for(int i=sr;i<=er;i++){
	            count++;
	            ans.push_back(arr[i][ec]);
	        }
	        ec--;
	        if(count>=m*n)
	            break;
	            
	        for(int i=ec;i>=sc;i--){
	            count++;
	            ans.push_back(arr[er][i]);
	        }
	        er--;
	        if(count>=m*n)
	            break;
	            
	        for(int i=er;i>=sr;i--){
	            count++;
	            ans.push_back(arr[i][sc]);
	        }
	        sc++;
	    }
	
        
    return ans;    
    }
};