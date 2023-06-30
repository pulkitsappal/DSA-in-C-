Question:-- You are an IT company's manager. Based on their performance over the last N working days, you must rate your employee. You are given an array of N integers called workload, where workload[i] represents the number of hours an employee worked on an ith day. The employee must be evaluated using the following criteria:
Rating = the maximum number of consecutive working days when the employee has worked more than 6 hours.
You are given an integer N where N represents the number of working days. You are given an integer array workload where workload[i] represents the number of hours an employee worked on an ith day.

Task:-
Determine the employee rating.


  Answer:-- 
  int solve (int N, vector<int> workload) {
   // Write your code here
   int max_rating = 0, curr_rating = 0;

   for(int i=0; i<N; i++){
        if(workload[i]>6){
            curr_rating++;
            if(curr_rating>max_rating) max_rating = curr_rating;
        }else {
            curr_rating = 0;
        }
   }
   return max_rating;
}
