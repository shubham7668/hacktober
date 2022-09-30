#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n,x,y,flag=1;
		cin>>n>>x>>y; 
		vector<int> vec1,vec2;
		for(int i=0;i<n;i++){
			int a; 
			cin>>a; 
			vec1.push_back(a);
		} 
		for(int i=0;i<n;i++){
			int a; 
			cin>>a; 
			vec2.push_back(a);
		}
		for(int i=0;i<n;i++){
			if((vec2[i] - vec1[i]) != x && (vec2[i] - vec1[i])!=y){
				cout<<"No\n"; 
				flag = 0; break; 
			}
		}
		if(flag){
			cout<<"Yes\n";
		}
	}
	return 0; 
}