#include<bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2)
{
    if(s1.length()!=s2.length()) return false;
    return ((s1+s1).find(s2)!=string::npos);
}


int main()
{
    string s1 = "ABCD";
    string s2 ="CDAB";
    if(areRotations(s1,s2)) { cout<<"Strings are rotations of each other"<<endl;}
    else { cout<<"Strings are not rotations of each other"<<endl;}

    return 0;
}
