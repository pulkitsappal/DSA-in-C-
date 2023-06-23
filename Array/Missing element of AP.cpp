 int findMissing(int arr[], int n) {
        // code here
        int diff = (arr[n-1] - arr[0])/n;
        for(int i=1; i<n; i++) if(arr[i]-arr[i-1]!=diff) return arr[i]-diff;
    }
