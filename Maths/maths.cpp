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

int gcd(int n1, int n2){
    if(n1==0) return n2;
    if(n2==0) return n1;

    if(n1>n2){
        return gcd(n1%n2, n2);
    }
    else{
        return gcd(n1, n2%n1);
    }
}

bool armstrong(int num){
    int digits = 0;
    int temp = num;

    while(temp){
        digits++;
        temp /= 10;
    }
    
    int ans = 0;
    temp = num;

    while(temp){
        int last = temp % 10;
        ans += (pow(last, digits));
        temp /= 10;
    }

    if(ans==num) return true;
    return false;
}

bool isPrime(int n){
for(int i=2; i<=sqrt(n); i++){
    if(n%i==0) return false;
}
return true;
}

int main(){
    // int n;
    // scanf("%d", &n);
    // printDivisors(n);

    // cout<<gcd(15, 30);
    // cout<<armstrong(134);

    cout<<isPrime(10);

    return 0;
}