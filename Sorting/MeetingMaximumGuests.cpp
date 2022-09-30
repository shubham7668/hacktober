//Efficient Solution : Time:O(nlogn)

int maxCount(int arr[], int dep[], int n)
{
    sort(arr, arr+n);
    sort(dep, dep+n);
    int t=1,j=0, res=1, curr=1;

    while(i<n && j<n)
    {
        if(arr[i]<= dep[j])
        {
            curr++;
            i++;
        }
        else{
            curr--;
            j--;
        }

        res= max(res, curr);
    }

    return res;
}