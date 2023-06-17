class Solution{
    private:
  //map to store frequency of elements
    unordered_map<int, int> m;
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
        m[k]++;
        
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        return m[k];
    }
    
};
