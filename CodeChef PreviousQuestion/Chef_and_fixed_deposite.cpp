#include<bits/stdc++.h>
using namespace std;
int cmp(int a , int b){
	return a>b; 
}
int main(){

	int t;
	cin>>t;
	while(t--){

		int n,x;
		cin>>n>>x; 
		vector<int> s; 
		for(int i=0;i<n;i++){
			int q;
			cin>>q;
			s.push_back(q); 
		}
		sort(s.begin(),s.end(),cmp);
		int sum=0,count=0; 
		int i=0;
		bool valid = true;
		while(sum<x){
			if(i==n){
				cout<<"-1"<<endl;
				valid = false;
				break; 
			}
			sum+=s[i];
			count++; 
			i++;
		}
		if(valid){
			cout<<count<<endl;
		}

	} 

	return 0; 
}