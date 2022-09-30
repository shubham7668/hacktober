#include<bits/stdc++.h>
using namespace std;
int main(){

	int t; 
	cin>>t; 
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		if(x+y>z){
			cout<<"TRAIN\n"; 
		}
		else if(x+y<z){
			cout<<"PLANEBUS\n"; 
		}
		else{
			cout<<"EQUAL\n";
		}
	}

	return 0; 
}