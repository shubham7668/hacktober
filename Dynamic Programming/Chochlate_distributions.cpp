#include<bits/stdc++.h>
using namespace std; 
int mini = INT_MAX; 
void getMinimum(vector<int> &v, vector<int> &vm,int m, int idx){
	if(idx>=v.size()){
		return; 
	}
	
	if(vm.size() == m){
		sort(vm.begin(), vm.end()); 
		mini = min(mini,abs(vm[m-1] - vm[0])); 
	}

	vm.push_back(v[idx]); 
	getMinimum(v,vm,m,idx+1); 
	vm.pop_back(); 
	getMinimum(v,vm,m,idx+1); 

}

int main(){
	int n; 
	cin>>n ; 
	vector<int> v(n); 
	for(int i =0 ;i<n;i++){
		cin>>v[i]; 
	}
	int m; 
	cin>>m; 
	vector<int> vec;
	getMinimum(v,vec,m,0);
	cout<<mini<<endl; 

	return 0; 
}