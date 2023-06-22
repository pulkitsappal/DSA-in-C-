bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        int five = 0;
        int ten = 0;
        int twenty = 0;
        
        for(int i=0; i<N; i++){
            
            if(bills[i]==5) five++;
            else if(bills[i]==10){
                    ten++;
                if(five>0){
                    five--;
                } 
                else {
                    return false;
                }
            }
            else {
                
                    twenty++;
                if(five>0 && ten>0){
                    five--;
                    ten--;
                } 
                else if(five>2){
                    five -= 3;
                }
                else {
                    return false;
                }
            }
        }
        
        return true;
    }
