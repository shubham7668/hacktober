#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; 
	cin>>n; 
	vector<int> vec,vec2; 
	for(int i=0;i<n;i++){
		int w; 
		cin>>w; 
		vec.push_back(w);
		vec2.push_back(w); 
	}
	for(int i=1;i<n;i++){
		vec[i] *=vec[i-1]; 
	}
	int q;
	cin>>q;
	while(q--){
		int l,r,m;
		cin>>l>>r>>m; 
		int ans;
		if(vec[l-1]!=0){
			ans = (vec[r-1] / vec[l-1])*vec2[l-1];
			ans = ans%m; 
			cout<<ans<<"\n";
		}else{
			cout<<"0\n";
		}

 
	}
	return 0; 
}