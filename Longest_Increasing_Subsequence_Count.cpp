#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findMinchar(string res,string srch)
{
    int nr=res.length();
    int ns=srch.length();
    int i,j;
    for( i=0,j=0;i<ns;)
    {
        if(srch[i]==res[j])
        {
            j++;
            i++;
        }
        else{
            i++;
        }
    }
    if(j==nr)         
    {
        return 0;
    }
    return (nr-j);
}
int main()
{
    string res,srch;
    cin>>res>>srch;
    cout<<findMinchar(res,srch);

}
