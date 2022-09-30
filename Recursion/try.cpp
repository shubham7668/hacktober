#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void printrev(int n){
	if(n==0){
		return; 
	}
	else{
		cout<<n<<endl; 
		printrev(n-1); 
	}
}

int main(){
	int n; 
	cin>>n; 
	printrev(n); 
	return 0;
}