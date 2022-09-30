#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,x_i,x_j;
	int a[100][100]; 
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			cin>>a[i][j]; 
			if(a[i][j]==1){
				x_i = i; x_j = j ;
			}
		}
	}
	x_j-=3;x_i-=3; 
	if(x_j<0) x_j*=(-1);
	if(x_i<0) x_i*=(-1);
	cout<<x_i+x_j<<"\n"; 
	return 0; 
}