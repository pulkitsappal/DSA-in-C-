int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    for(int i=0; i<N; i++){
	        
	        if(mat[i][0]<=X && mat[i][M-1]>=X){
	            
	            int low = 0, high = M-1;
	            
	            while(low<=high){
	                int mid = (low + high)/2;
	                if(mat[i][mid]==X) return 1;
	                else if(mat[i][mid]>X) high--;
	                else low++;
	            }
	        }
	    }
	    
	    return 0;
	}
