#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void printinc(int n){
	if(n == 0){
		return; 
	}
	else{
		printinc(n+1); 
		cout<<n<<endl;
	}
}

int main(){
	int n; 
	cin>>n; 
	printinc(n); 
	return 0;
}