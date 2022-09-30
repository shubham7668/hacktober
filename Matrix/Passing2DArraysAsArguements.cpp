//C-Style Solutions to write general purpose Matrix Methods

//Method 1: Using Double Pointers

#include<bits/stdc++.h>
using namespace std;

void print(int **arr, int m, int n)
{
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
         cout<<arr[i][j]<<" ";

}


int main()
{
    int **arr;
    int m=3, n=2;
    arr= new int *[m];
    for(int i=0;i<m;i++)
    {
        arr[i]= new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j] = i;
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;

}




//Method 2: Using Array of Pointers

void print(int *arr[], int m , int n)
{
    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";

}

int main()
{
    int m=3, n=2;
    int *arr[m];   //Array of pointers

    for(int i=0;i<m;i++)
    {
        arr[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j]=i;
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}


//C++ Vector Solution to write general purpose Matrix Functions

//Method 3: Using Array of Vectors
void print(vector<int> arr[], int m)
{
    for(int i=0;i<m;i++)
      for(int j=0;j<arr[i].size();j++)
         cout<<arr[i][j]<<" ";
}

int main()
{
    int m=3, n=2;
    vector<int> arr[m];
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)
        arr[i].push_back(i);

    print(arr);
    return 0;       
}


//Method 4: Using Vector of Vectors

void print(vector<vector<int>>&arr)
{
    for(int i=0;i<arr.size();i++)
      for(int j=0;j<arr[i].size();j++)
           cout<<arr[i][j]<<" ";
}

int main()
{
    int m=3, n=2;
    vector<vector<int>> arr;
    for(int i=0; i<m;i++)
    {
        vector<int> v;
        for(int j=0;j<n;j++)
           v.push_back(i);

        arr.push_back(v);   
    }

    print(arr);
}

//A 2-D array is Called a Jagged Array if we have different number of items in individual rows.
 