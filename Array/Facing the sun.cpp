int countBuildings(int h[], int n) {
	    // code here
	    int count = 1;
	    int curr_max = h[0];
	    for(int i=1; i<n; i++){
	        if(h[i]>curr_max){
	            count++;
	            curr_max = h[i];
	        }
	    }
	    
	    return count;
	}
