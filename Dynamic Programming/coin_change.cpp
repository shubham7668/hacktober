#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define int int64_t
int find(int v, int *arr, int n, int **output)
{
    if(v==0) return 1;
    if(v<0) return 0;
    if(n==0) return 0;
    if(output[v][n]!=-1) return output[v][n];
    //include
    int x=find(v-arr[0],arr,n,output);
    //exclude
    int y=find(v,arr+1,n-1,output);
    output[v][n]=(x%M+y%M)%M;
    return output[v][n];
}
void solve()
{
    int n,v;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>v;
    int **output=new int*[v+1];
    for(int i=0;i<=v;i++)
    {
        output[i]=new int[n+1];
        for(int j=0;j<=n;j++) output[i][j]=-1;
    }
    int ans=find(v,arr,n,output);
    cout<<ans<<'\n';
    
}

int32_t main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
/*
Sample Input:
2
2
1 2 
6
1
1 
9
Sample Output:
4
1
*/
