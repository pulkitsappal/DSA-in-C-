#include<bits/stdc++.h>
using namespace std;

void pattern21(int n){

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1 || i==n) cout<<"*";
			else{
				if(j==1 || j==n) cout<<"*";
				else cout<<" ";
			}
		}	
		cout<<endl;
	}
}

void pattern12(int n){
	
}

void pattern11(int n){
	for(int i=1; i<=n; i++){
		if(i&1==0){  //even i
			for(int j=1; j<=i; j++){
					if(j&1==0){
						cout<<1;
					}
					else{
						cout<<0;
					}
			}
		}
		else{  //odd i
			for(int j=1; j<=i; j++){
				if(j&1==0){
						cout<<0;
					}
					else{
						cout<<1;
					} 
			}
		}

		cout<<endl;
	}
}

int main(){
	int n;
	scanf("%d", &n);

	pattern21(n);
	return 0;
}
