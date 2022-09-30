int lpartition(int arr[], int l, int h)
{
    int pivot= arr[h];
    int i= l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[i] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[h]);
    return (i+1);
}

//Time Complexity: O(n) and Aux. Space Complexity: O(1)
