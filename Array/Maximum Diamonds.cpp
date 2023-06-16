class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
       priority_queue<int> pq;
       for(int i=0; i<N; i++) pq.push(A[i]);
       
       long ans = 0;
       while(K--){
           int curr = pq.top();
           pq.pop();
           ans += curr;
           pq.push(curr/2);
       }
       
       return ans;
    }
};
