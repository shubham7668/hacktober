// Cycle Sort

// 1. A worse case O(n^2) sorting algorithm
// 2. Does minimum memory writes and can be useful for cases where memory write is costly
// 3. In Place and Not Stable.
// 4. Useful to solve questions like find minimum swaps required to sor the array.


//this code is made one condition in mind that all the input elements are ditinct.

void cycleSortDistinct()
{
    for(int cs=0; cs<n-1; cs++)
    {
        int item= arr[cs];
        int pos =cs;
        for(int i= cs+1; i<n ; i++)
        {
              if(arr[i] < item)
                pos++;     
        }

        swap(item, arr[pos]);

        while(pos != cs)
        {
            pos= cs;
            for(int i = cs+1; i<n ; i++)
               if(arr[i] < item)
                 pos++;

            swap(item, arr[pos]);     
        }
    }
}