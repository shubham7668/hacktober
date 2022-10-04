#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,i,j;
    cin>>t;
    while(t--)
    {
        int c=1;
        char s[100005],p[1005],p1[1005];
        cin>>p>>s;
        char *r1=strstr(s,p);
        for(i=strlen(p)-1,j=0;i>=0;i--,j++) p1[j]=p[i];
    char *r2=strstr(s,p1);
    if(r1||r2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
}
