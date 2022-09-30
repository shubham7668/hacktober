#include<bits/stdc++.h>
using namespace std;
void solve(){
	int x,y,z;
	cin>>x>>y>>z; 
	if(z%x == 0){
		cout<<"CHICKEN\n"; 
	} 
	else if(z%y==0){
		cout<<"DUCK\n"; 
	}
	else if(z%(x*y) == 0){
		cout<<"ANY\n"; 
	}
	else{
		cout<<"NONE\n"; 
	}

	return; 
} 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		solve(); 
	}
	return 0; 
}