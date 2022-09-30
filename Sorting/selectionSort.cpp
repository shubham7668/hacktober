//Unstable Sorting Algorithm
//Time Complexity: Theta(n^2) always
void selectSort(arr,n)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        int min_ind=0;
        for(int j=1;j<n;j++)
        {
            if(arr[j] < arr[mid_ind])
               mid_ind=j;  
        }

        temp[i]=arr[min_ind];
        arr[min_ind]=INFINITY;

    }
    for(int i=0;i<n;i++)
       arr[i]=temp[i];
}



//optimized Solution
void selectSort(arr,n)
{
    for(i=0;i<n-1;i++)
    {
        min_ind=i;
        for(int j=i+1;i<n;j++)
            if(arr[j]<arr[min_ind])
               min_ind=j;


      swap(arr[min_ind],arr[i]);         
    }
}