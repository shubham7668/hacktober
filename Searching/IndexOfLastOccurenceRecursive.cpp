int lastOcc(int arr[],int low,int high,int x, int n)
{
    if(low > high)  return -1;
    int mid=(low+high)/2;
    if(arr[mid]>x)
       return lastOcc(arr,low,mid-1,n);
    else if(arr[mid] < x)
        return lastOcc(arr,mid+1,high,n);
    else{
        if(mid==n-1||arr[mid]!=arr[mid+1])
          return mid;
        else
           return lastOcc(arr,mid+1,high,n);  
    }       
}
//O(log n) time
//O(1) Aux Space