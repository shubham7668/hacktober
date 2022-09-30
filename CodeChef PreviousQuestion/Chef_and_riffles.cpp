#include<bits/stdc++.h>
using namespace std;
bool check(int res[],int cnst[],int n){
	for(int i=1;i<n+1;i++){
		if(res[i]!=cnst[i]){
			return false;
		}
	}
	return true; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k; 
		cin>>n>>k; 
		int v1[n+1];
		int v2[n+1],l=1,res[n+1],count=0,cnst[n+1],time=0;
		vector<vector<int>> vec;
		vector<int> v;  
		for(int i=1;i<n+1;i++){
			v1[i] = i;
			cnst[i] = i;
			v.push_back(i);  
			if(v1[i]%2!=0){
				v2[l] = i;
				l++;  
			}
		}
		vec.push_back(v); 
		for(int i=1;i<n+1;i++){
			if(v1[i]%2==0){
				v2[l] = i;
				l++; 
			} 
		}
		while(!check(res,cnst,n)){
			v.clear();
			for(int i=1;i<n+1;i++){
				res[i] = v2[v1[i]];
			}

			
			for(int i=1;i<n+1;i++){
				v1[i] = res[i];
				v.push_back(res[i]);  
			}
			vec.push_back(v); 
			count++; 
		}
		if(count!=0)
		{
			for(auto it : vec[k%count]){
						cout<<it<<" ";
				}
		}
		else{
			if(n==0){
				cout<<"0";
			}

		}
		cout<<endl; 
		
	}
	return 0; 
}