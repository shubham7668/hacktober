#include<bits/stdc++.h>
using namespace std;

int sortedPermutationRank(string str)
{
    int n = str.length();
    long fact[26];
    int arr[256] = {};
    fact[0] = 1;
    fact[1] = 1;
    for(int i=2; i<26;i++)
    {
        fact[i] = i * fact[i-1];
    }

    for(int i=0; i<n; i++)
    {
        arr[str[i]]++;
    }

    int numberOfLetterSmaller;
    int output=0;
    for(int i=0;i<n;i++)
    {
        numberOfLetterSmaller = 0;
        for(int j=0; j<256;j++)
        {
            if(j==str[i]){
                break;
            }
            if(arr[i])
            {
                numberOfLetterSmaller++;

            }
        }
        arr[str[i]]=0;
        output+=numberOfLetterSmaller*fact[n-1-i];
    }
    return output+1;
} 

int main()
{
    cout<<sortedPermutationRank("ibytes")<<endl;
    return 0;
}