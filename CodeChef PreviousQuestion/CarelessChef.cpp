#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(){
	int n; 
	cin>>n; 
	int n2 = 2*n; 
	int sum=0; 
	for(int i=0;i<n2;i++){

		int x; 
		cin>>x; 
		sum+= x; 
	}
	if(sum&1){
		cout<<"NO"<<endl ;
	}
	else{
		cout<<"YES\n" ; 		
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}