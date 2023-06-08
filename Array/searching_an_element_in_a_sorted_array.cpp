int binarySearch(int arr[], int N, int K) 
    { 
       // N -> size of array
      // K -> Number to search in the array
       int low = 0, high = N-1;
       while(low<=high){
           int mid = low + (high - low)/2;
           if(arr[mid]==K) return 1;
           if(arr[mid]<K) low = mid + 1;
           else high = mid - 1;
       }
       
       return -1;
    }
