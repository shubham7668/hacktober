//Naive Solution: O(n^3)
//start= min(i1.start, i2.start)
//end= max(i1.end, i2.end)
//Time Complexity: O(n^3)..... n^2 for checking the overlapping and n for deleting the overlapped array.


//Efficient Solution:
//sort by start time in increasing order.
//or,
//sort by end time in decreasing order.
//O(nlogn) Implementation


struct Interval
{
    int start, end;
}

void mergeIntervals(Interval arr[], int n)
{
    sort(arr, arr+n, myComp);   //myComp is a comparator function which will be used to sort the array in the increasing order of start time.
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[res].end >= arr[i].start)
        {
            arr[res].end= max(arr[res].end, arr[i].end);
            arr[res].start= min(arr[res].start, arr[i].start);
        }

        else{ res++;  arr[res]= arr[i]; }
    }

    for(int i=0;  i<=res; i++)
       cout<<arr[i].start<<" "<<arr[i].end<<endl;
}