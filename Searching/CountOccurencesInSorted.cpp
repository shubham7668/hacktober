int countOcc(int arr[],int n,int x)
{
    int first=firstOcc(arr,n,x);
    if(first==-1)
        return 0;
    else 
    return lastOcc(arr,n,x)-first+1;    

}