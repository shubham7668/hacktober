//Naive Solution
//Time Complexity: Theta(n) and Aux. Space: Theta(n)

void segregatePosNeg(int arr[], int n)
{
    int temp[n], i=0;
    for(int j=0; j<n;j++)
    {
        if(arr[j]<0)
        {
            temp[i]= arr[j];
            i++;
        }
    }

    for(int j=0; j<n; j++)
    {
        if(arr[i]>=0)
        {
            temp[i]=arr[i];
            i++;
        }
    }
    for(int j=0;j<n;j++)
       arr[j]= temp[j];
}

 

 //this problem is actually a Variation of the partition function of quicksort algorithm.

 //Efficient Solution: Hoarse partition Algorithm
 void segPosNeg(int arr[], int n)
 {
    int i= -1, j=n;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<0);

        do{
            j--;
        }while(arr[i]>0);

        if(i>=j)
          return;
        swap(arr[i], arr[j]);  
    }
 }

 //Time Complexity: Theta(n)
 //Aux. Space: Theta(1)
 //Single Traversal
 