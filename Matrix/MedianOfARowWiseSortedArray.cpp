
//Assumptions to keep in mind:
//1. Odd Sized Array
//2. All Distinct Elements




//Naive Solution:
//1. Put all elements in an array
//2. Sort the Array
//3. Return the middle element of the sorted array.




//Efficient Solution
//Time Complexity: O(log(max-min)*r*log C) 
//where max= maximum element and min= minimum element

int matMed(int mat[][MAX], int r, int c)
{
    int min= mat[0][0], max= mat[0][c-1];
    for(int i=1;i<r;i++)
    {
        if(mat[i][0]<min)
        {
            min= mat[i][0];
        }
        if(mat[i][c-1] > max)
        {
            max= mat[i][c-1];
        }

    }

    int medpos = (r*c+1)/2;
    while(min<max)
    {
        int mid= (min+max)/2;
        int midpos = 0;
        for(int i=0;i<r;i++)
           midpos+= upper_bound(mat[i], mat[i]+c, mid) - m[i];

        if(midpos < medpos)
          min= mid+1;

        else
           max = mid;     
    }

    return min;
}


