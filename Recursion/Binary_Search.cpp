#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin>>n; 
	vector<int> vec(n); 
	for(int i=0;i<n;i++){
		cin>>vec[i]; 
	}
	int target; 
	cin>>target;
	bool flag = 1;   
	sort(vec.begin(),vec.end()); 
	int lo =0, hi = n-1;  
	int i=0; 
	while(lo<=hi and i<5){
		int mid = lo + (lo-hi)/2; 
		if(vec[mid] == target){
			flag =0;
			break;  
		}
		if(vec[mid] < target){
			lo = mid+1;
		}
		if(vec[mid] > target) {
			hi = mid-1; 
		}
		i++; 
	}
	if(flag){
		cout<<"Not FOund"<<endl; 
	}
	else{
		cout<<"found"<<endl; 
	}
	return 0; 
}