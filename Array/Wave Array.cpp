void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        int pre = 0;
        int next =  1;
        
        while(next<n){
            int temp = arr[pre];
            arr[pre] = arr[next];
            arr[next] = temp;
            pre+=2; next+=2;
        }
    }
