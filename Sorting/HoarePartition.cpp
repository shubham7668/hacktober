//Partition is done only once and Time Complexity is o(n) and Aux. Space Complexity is O(1).
int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i=l-1, j= h-1;

    while(true)
    {
        do{
            i++;
        } while(arr[i]<pivot)

        do{
            j--;
        }while(arr[j]> pivot)

        if(i>=j)  return j;
        swap(arr[i],arr[j]);
    }
}
