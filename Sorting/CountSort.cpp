//Problem with the algorithm is that : It cannot be used as a general purpose algorithm for sorting objects with multiple members, like sorting an array of students by marks.
//Naive Approach
void countSort(arr, n, k)
{
    int count[k];
    for(int i=0;i<k;i++)
      count[i]=0;

    for(int i=0; i<n; i++)
       count[arr[i]]++;

    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0; j<count[i]; j++)
        {
            arr[index] = i;
            index++;
        }
    }     
}


//General Purpose implementation
//Solves the above problem as well

void CountSort(arr , n , k)
{
    int count[k];
    for(int i=0; i<k;i++)
       count[i] = 0;

    for(int i=0; i<n;i++)
      count[arr[i]]++;

    for(int i=1; i<k;i++)
       count[i] = count[i-1] + count[i];

    int output[n];
    for(int i=n-1; i>=0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;

    }   

    for(int i=0 ; i<n ; i++)
      arr[i] = output[i];     
}

//Features of CycleSort:
// 1. Not a comparison based algorithm
// 2. Theta(n+k) TIME
// 3. Theta(n+k) Aux. Space
// 4. Stable
// 5. Used as a subroutine in Radix Sort.






