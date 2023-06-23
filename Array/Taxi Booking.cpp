 int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        int min = INT_MAX;
        for(int i=0; i<N; i++){
            int diff = abs(pos[i]-cur) * time[i];
            if(diff<min) min = diff;
        }
        return min;
    }
