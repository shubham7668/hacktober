#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	cin>>n; 
	while(n--){
		int x,y,z;
		cin>>x>>y>>z; 
		cout<<((z*x) - (y*x))<<"\n"; 
	}

	return 0;
}