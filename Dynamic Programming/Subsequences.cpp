#include<bits/stdc++.h>
using namespace std; 

vector<vector<int>> vec; 

void printSubSeq(int idx,vector<int> &arr, vector<int> &v){
	if(idx==arr.size()){
		vec.push_back(v); 
		return; 
	}
	v.push_back(arr[idx]); 
	printSubSeq(idx+1,arr,v);
	v.pop_back();  

	printSubSeq(idx+1,arr,v); 
}

int main(){
	vector<int> arr; 
	int siz; 
	cin>>siz; 
	for(int i=0;i<siz;i++){
		int a; 
		cin>>a; 
		arr.push_back(a); 
	}
	vector<int> v; 
	printSubSeq(0,arr,v); 
	for(auto i :vec){
		for(auto j:i){
			cout<<j<<" "; 
		}
		cout<<endl; 
	}

	return 0; 
}