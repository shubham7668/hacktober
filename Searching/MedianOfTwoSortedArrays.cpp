// Naive Solution Complexity : O( (n1+n2)* log(n1+n2) )  , where n1 = size of a1[] and n2 = size of a2[]

// 1. Create an array temp[] of size(n1+n2)
// 2. Copy elements of a1[] and a2[] into temp[]
// 3. Sort temp[]
// 4. If (n1+n2) is odd, then return the middle element
// 5. Else return average of middle two elements.

//For the Implementation of Efficient Solution, make sure that the size of first array is smaller than the size of second array.


double getMed(int a1[], int a2[],int n1,int n2)
{
    int begin1=0,end1=n1;
    while(begin1<=end1)
    {
        int i1=(begin1+end1)/2;
        int i2=(n1+n2+1)/2  -i1;
        int min1=(i1==n1)? INT_MAX :a1[i1];
        int max1=(i1==0)?  INT_MIN :a1[i1-1];

        int min2=(i2==n2)? INT_MAX : a2[i2];
        int max2=(i2==0)? INT_MIN : a2[i2-1];

        if(max1<=min2 && max2<=min1)
        {
            if((n1+n2)%2==0)
               return ((double) max(max1,max2)+max(min1,min2))/2;

            else
               return (double) max(max1,max2);

        }

        else if(max1 > max2)
          end1= i1-1;
        else  
          begin1=i1+1;
    }
}


