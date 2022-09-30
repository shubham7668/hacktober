#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n; 
	cin>>n; 
	int target;
	cin>>target; 
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i]; 
	} 
	sort(v.begin(),v.end()); 
	int lo = 0, hi = n-1; 
	bool isFound= false; 
	int correctPosition=-1;

	while(lo<=hi){
		int mid = lo + (hi-lo)/2; 
		if(v[mid] == target){
			cout<<"Found"<<endl;
			isFound = true;  
			break;
 		}
		if(v[mid]<target){
			lo = mid+1; 
			correctPosition  = lo; 
		}
		if(v[mid]>target){
			hi = mid-1; 
			correctPosition  = hi; 
		}
	}
	if (!isFound){
		cout<<correctPosition<<endl;
	}

}