#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void printDivisors(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){ cout<<i<<" ";
            if(i!=n/i)cout << n/i << " ";
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printDivisors(n);
    return 0;
}