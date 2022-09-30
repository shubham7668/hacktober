#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int xtothepowern(int x,int n){
	if(n==0){
		return 1; 
	}
	return x*xtothepowern(x,n-1); 
}
int newgu(int x, int n){

	if(n ==0){
		return 1; 
	}

	if(n%2!=0){
		return (x*newgu(x,n/2)*newgu(x,n/2));
	} 
	else{
		return (newgu(x,n/2)*newgu(x,n/2));
	}
}
int main(){
	int x; 
	cin>>x; 
	int n; 
	cin>>n; 
	int ans = xtothepowern(x,n);
	cout<< ans <<endl ;
	return 0;
}