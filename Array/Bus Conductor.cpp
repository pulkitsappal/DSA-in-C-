class Solution {
  public:
    int findMoves(int n, vector<int> chairs, vector<int> passengers) {
        
        sort(chairs.begin(), chairs.end());
        sort(passengers.begin(), passengers.end());
        
        int count = 0;
        for(int i=0; i<n; i++){
            count += abs(chairs[i] - passengers[i]);
        }
        
        return count;
    }
};
