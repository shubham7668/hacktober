int sqRootFloor(int x)
{
    int low=1,high=x,ans=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        int mSq= mid*mid;
        if(mSq==x)
        return mid;

        else if(mSq>x)
          high=mid-1;

        else{
            low=mid+1;
            ans=mid;
        }  
    }
    return ans;
}