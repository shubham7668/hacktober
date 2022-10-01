#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10; 
int arr[N];
void merge(int l,int r,int mid){
	int l_sz = mid - l + 1;
	int L[l_sz + 1]; 
	int r_sz = r-mid; 
	int R[r_sz +1]; 
	for(int i=0;i<l_sz;i++){
		L[i] = arr[i+l]; 
	} 
	for(int i=0;i<r_sz;i++){
		R[i] = arr[i+mid+1]; 
	} 
	L[l_sz] = R[r_sz] = INT_MAX; 
	int l_i = 0,r_i= 0;
	for(int i =l;i<=r;++i){
		if(L[l_i]<=R[r_i]){
			arr[i] = L[l_i];
			l_i++; 
		}
		else{
			arr[i] = R[r_i];
			r_i++; 	
		}
	}
	
}  
void mergesort(int l,int r){
	if(l==r){
		return; 
	}
	int mid = (l+r)/2; 
	mergesort(l,mid); 
	mergesort(mid+1,r); 
	merge(l,r,mid); 
}
int main(){
	int n; 
	cin>>n; 
	for(int i=0;i<n;i++){
		cin>>arr[i]; 
	}
	mergesort(0,n-1); 
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";  
	}
	return 0; 
}