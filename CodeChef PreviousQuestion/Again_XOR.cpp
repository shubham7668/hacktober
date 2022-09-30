 #include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t; 
	while(t--){
	int n,k,sum=0; 
	string s;
	cin>>n>>k>>s; 
	int arr[n]={0}; 
	for(int i=0;i<n;i++){
		if(s[i]=='1')sum++;
		arr[i]=sum; 
	}
	int x=n-k; 
	int ans[k];
	int p = x+1;
	ans[0] = arr[p-1]; 
	for(int i=1;i<k;i++){
		ans[i]=arr[i+p-1]-arr[i-1]; 
	}
	int count=0; 
	for(int i=0;i<k;i++){
		if(ans[i]%2==1)count++; 
	}
	cout<<count<<"\n"; 
	}
	return 0; 
}