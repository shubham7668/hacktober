#include<bits/stdc++.h>
using namespace std;

int cal(int n,int k,int idx, vector<int> &h){
	if(idx == 0){
		return 0; 
	}
	int mini = INT_MAX;  
	for(int i=1;i<=k;i++){
		if(idx-i>=0)
		mini = min(mini, cal(n,k,idx-i,h)+abs(h[idx]-h[idx-i])); 
	}
	
	return mini; 
}
int main(){	
	int n,k; 
	cin>>n>>k; 
	vector<int> h;
	for(int i=0;i<n;i++){
		int a; 
		cin>>a;
		h.push_back(a); 
	}
	cout<<cal(n,k,n,h); 

	return 0; 
}