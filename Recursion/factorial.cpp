#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int fact(int n){
	if(n==0){
		return 1; 
	}
	return (n*fact(n-1)); 	
}

int main(){
	int n; 
	cin>>n; 
	int ans = fact(n);
	cout<< ans <<endl ;
	return 0;
}