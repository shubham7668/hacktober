#include<bits/stdc++.h>
using namespace std; 
int fibbonacci(int n,vector<int> &dp){
	if(n<=1){
		return n; 
	}
	if(dp[n]!=-1){
		return dp[n]; 
	}
	dp[n] = fibbonacci(n-1,dp) + fibbonacci(n-2,dp); 
	return dp[n]; 
}

int main(){
	int n; 
	cin>>n; 
	// vector<int> dp(n+1,-1);
	// cout<<fibbonacci(n,dp)<<endl; 
	int prev1 = 1, prev2 =0;
	int curr=0; 
	for(int i = 2; i<= n; i++){
		curr = prev1 + prev2; 
		prev2 = prev1; 
		prev1 = curr; 
	}
	cout<<prev1<<endl; 
	return 0; 
}