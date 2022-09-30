//Naive Solution: O(nlogn)

int KthSmallest(int arr[], int n, int k)
{
    sort(arr, arr+n);  // assuming that the sort function works in nlogn Time Complexity.
    return arr[k-1];
}



//Efficient Solution

//QuickSelect Algorithm

int kthSmallest(int arr[], int n, int k)
{
    int l=0, r=n-1;

    while(l<=r)
    {
        int p= partition(arr,l,n);
        if(p==k-1)
           return p;

        else if(p> k-1)
           r=p-1;

        else   
           l=p+1;   
    }
    return -1;
}