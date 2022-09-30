//Naive Solution: O(n*m)

void intersection(int a[],int b[],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        if(i>0 && a[i]==a[i-1])
          continue;

        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }  
    }
}




//Efficient Solution: Using Merge Sort Algorithm
//Time Complexity: O(m+n)
//Solution will work keeping in mind that the array is sorted.


void intersection(int a[],int b[], int m, int n)
{
    int i=0,j=0;

    while(i<m && j<n)
    {
        if(i>0 && a[i]==a[i-1])
        {
            i++;
            continue;
        }

        if(a[i]< b[j]){  i++; }
        else if(a[i] > b[j]) {  j++; }
        else{ cout<<a[i]<<" ";  i++;  j++; }
    }
}

