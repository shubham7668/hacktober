#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maximumSum(int arr[], int n, int k){

    for(int i=0; i<k; ++i){
        int min = INT_MAX;
        int index = -1;

        for(int j=0; j<n; ++j){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }

        if(min == 0)
        break;

        //Modify the negative elements.
        arr[index] = -arr[index];
    }

    int sum = 0;
    for(int i=0; i<n ; ++i)
        sum+=arr[i];

    return sum;
}

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; ++i)
        cin>>arr[i];

    int k;
    cout<<"Enter number of operation that should be done: ";
    cin>>k;

    int maxSum = maximumSum(arr, n, k);

    cout<<"The maximum sum of array after "<<k<<" operation is: "<<maxSum<<endl;
}
