int minDiff(int arr[], int n, int m)
{
    if(m>n) return -1;
    sort(arr, arr+n);
    int res= arr[m-1]-arr[0];
    for(int i=1; (i+m-1)< n; i++)
        res= min(res, arr[i+m-1]- arr[i]);

    return res;    
}