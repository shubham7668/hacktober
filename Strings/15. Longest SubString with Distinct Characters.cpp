#include<bits/stdc++.h>
using namespace std;


//Naive Solution: O(n^3)
bool areDistinct(string str, int i, int j)
{
    vector<bool> visited(256);

    for(int k =i; k<=j ; k++)
    {
        if(visited[str[k]]==true)
            return false;
        visited[str[k]] = true;    
    }
    return true;
}

int longestDistinct(string str)
{
    int n = str.length();
    int res=0;
    for(int i=0; i<n;i++)
       for(int j=i;j<n;j++)
          if(areDistinct(str,i,j))
               res = max(res, j-i+1);

    return res;              
}



//Better Solution : O(n^2)

int longestDistinct(string str)
{
    int n = str.size();
    int res = 0;
    for(int i=0;i<n;i++)
    {
        vector<bool> visited(256);
        for(int j=i;j<n;j++)
        {
            if(visited[str[j]]==true){
                break;
            }
            else{
                res= max(res, j-i+1);
                visited[str[j]] = true;
            }
        }
    }

    return res;
}

int main()
{
    string str = "geeksforgeeks";
    int len = longestDistinct(str);
    cout<<"The length of the longest distinct characters substring is "<<len;
    return 0;
}



//Best Solution : O(n)

int longestDistinct(string str)
{
    int n = str.length();
    int res=0;
    vector<int> prev(256,-1);
    int i=0;
    for(int j=0; j<n;j++)
    {
        i = max(i, prev[str[j]] + 1);
        int maxEnd = j-i+1;
        res = max(res, maxEnd);
        prev[str[j]] = j;
    }
    return res;
}


int main()
{
    string str = "geeksforgeeks";
    int len = longestDistinct(str);
    cout<<"The length of the longest distinct characters substring is "<<len;
    return 0;
}
