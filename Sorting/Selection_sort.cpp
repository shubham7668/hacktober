#include<bits/stdc++.h>
using namespace std; 
int main(){
	 int  n; 
	 cin>>n; 
	 int arr[n]; 
	 for(int i=0;i<n;i++){
	 	cin>>arr[i]; 
	 }
	 for(int i=0;i<n;i++){
	 	int min = INT_MAX,min_i=0;
	 	for(int j=i;j<n;j++){
	 		if(min>arr[j]){
	 			min = arr[j];
	 			min_i = j;
	 		}
	 	}
	 	int d = arr[min_i]; 
	 	arr[min_i] = arr[i]; 
	 	arr[i] = d; 
	 }
	 for(int i=0;i<n;i++){
	 	cout<<arr[i]<<" ";  
	 }
	return 0; 
}