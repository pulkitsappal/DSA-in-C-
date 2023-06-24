int klengthpref(string arr[], int n, int k, string str){  
        
        if(k>str.length()) return 0;
        int count = 0;
        string s1 = str.substr(0, k);
        
        for(int i=0; i<n; i++){
            string sub = arr[i].substr(0, k);
            if(sub==s1) count++;
        }
        
        return count;
    }
