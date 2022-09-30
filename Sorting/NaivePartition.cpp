//Naive Partition - Stable
//Lomuto and Hoare Partition - Unstsable


int partititon(int arr[], int l, int h, int p)
{

    int temp[h-l+1], index=0;
    for(int i=l;i<=h;i++)
       if(arr[i] < arr[p])
        {
            temp[index] = arr[i];
            index++;
        }

    for(int i=l; i<=h; i++)
    {
        if(arr[i]==arr[p])
        {
            temp[index]= arr[i];
            index++;
        }
    }

    int res=l+index-1;
    for(int i=l; i<=h;i++)
    {
        if(arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i=l;i<=h;i++)
    {
        arr[i]= temp[i-l];
    }

    return res;    
}