#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		int n; 
		cin>>n; 
		string s; 
		cin>>s;
		int num_of_1=0,num_of_0=0;  
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				num_of_1++; 
			}
			if(s[i]=='0'){
				num_of_0++; 
			}
		}
		int ans = min(num_of_0,num_of_1);
		if(ans-1<0){
			cout<<"0\n";
		} 
		else
		cout<<ans-1<<"\n"; 
	}
	return 0;  
}