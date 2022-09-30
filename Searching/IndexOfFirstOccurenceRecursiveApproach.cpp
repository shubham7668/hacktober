int firstOcc(int arr[],int low,int high,int x)
{
    if(low>high)
    return -1;            //Normal Binary Search

    int mid=(low+high)/2;
    if(x>arr[mid])
       return firstOcc(arr,mid+1,high,x);

    else if(x<arr[mid])
       return firstOcc(arr,low,mid-1,x);

    else{

        if(mid==0|| arr[mid-1]!=arr[mid])
           return mid;
        else
          return firstOcc(arr,low,mid-1,x);   
    }      

}