//Naive Approach

//Time Complexity: O(n^2)
// More worse approach will be like using condition  j<n-1 in place of j<n-i-1 in the second loop  
void bubbleSort(arr,n)
{
    for (int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
              swap(arr[j],arr[j+1]);
        }

    }
}




//Now in case of Sorted Array and if the array gets sorted in middle of so it does not do work ahead..

void bubbleSort(arr,n)
{
    for(i=0;i<n-1;i++)
    {
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
           break;
    }
}