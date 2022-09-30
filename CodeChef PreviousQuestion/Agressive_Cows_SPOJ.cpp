#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10; 
int n,cows; 
int position[N];
bool canPlaceCows(int minDist){
	int lastpos=-1;
	int cows_ct= cows; 
	for(int i=0;i<n;i++){
		if( lastpos == -1|| position[i] - lastpos>=minDist){	
			cows_ct--; 
			lastpos = position[i]; 
		}
		if(cows_ct==0) break; 
	}
	return cows_ct == 0; 
} 
int main(){
	int t; 
	cin>>t; 
	while(t--){
		cin>>n>>cows; 
		for(int i = 0; i < n; i++){
			cin>>position[i]; 
		}
	// TTTTTTTFFFFF
	int lo=0, hi=1e9; 
	int mid; 
	sort(position,position+n); 
	while(hi-lo>1){
		mid = (hi+lo)/2; 
		if(canPlaceCows(mid)){
			lo = mid; 
		}
		else{
			hi = mid-1;
		}
	}
	if(canPlaceCows(hi)){
		cout<<hi<<"\n";
	}
	else{
		cout<<lo<<"\n"; 
	}
	}


	return 0; 
}