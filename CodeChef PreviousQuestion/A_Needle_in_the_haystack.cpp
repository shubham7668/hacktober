// Wrong Solution 
// Retry link 
// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/a-needle-in-the-haystack-1/
#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t;
	cin>>t; 
	while(t--){
		string s1,s2; 
		cin>>s1>>s2; 
		int count = 0; 
		set<char> ss1,ss2; 
		for(int i=0;i<s1.size();i++){
			for(int j=0;j<s2.size();j++){
				if(s1[i] == s2[j]){
					s2[j] = '1'; 
					count++;
					break;  
				}
			}
		}
		if(count == s1.size()){
			cout<<"YES"<<endl; 
		}
		else{
			cout<<"NO"<<endl; 
		}
	}
	return 0; 
}