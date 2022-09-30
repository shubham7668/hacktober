#include<bits/stdc++.h>
using namespace std;

int main()
{

    int m=3,n=2;
    int arr[m][n];

    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        arr[i][j]= i+j;

    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";    

    return 0;
}


//Method 2 :  Double Pointer Method
//Pointed on Heap
int main()
{
    int m=3, n=2;
    int **arr;

    arr= new int *[m];
    for(int i=0;i<m;i++)
      arr[i]= new int [n];

    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
        {
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
}


//Method 3: Array of pointers
//Pointed on the Stack

int main()
{
    int m= 3, n=2;
    int *arr[m];
    
    for(int i=0;i<m;i++)
       arr[i]= new int[n];


    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
      {
        arr[i][j]= 10;
        cout<<arr[i][j]<<" ";
      }

}


//Method 4: Array of Vectors

int main()
{
    int m=3, n=2;
    vector<int> arr[m];

    for(int i=0;i<m;i++)
       for(int j=0;j<n;j++)
          arr[i].push_back(10);


   for(int i=0; i<m;i++)
      for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";

}



//Method 5: Vector of Vectors
int main()
{
    int m=3, n=2;

    vector<vector<int>> arr;
    for(int i=0;i<m;i++)
    {
        vector<int> v;
        for(int j=0;j<n;j++)
          v.push_back(10);

        arr.push_back(v);

    }

    for(int i=0;i<arr.size();i++)
        for(int j=0;j<arr[i].size();j++)
          cout<<arr[i][j]<<" ";
          
}