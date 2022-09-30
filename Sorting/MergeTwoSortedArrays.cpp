//Naive Solution

// Time Complexity: O((m+n)*log(m+n))
// Aux Space: theta(m+n)

void merge(int a[],int b[],int m, int n)
{
    int c[m+n];
    for(int i=0;i<m;i++)
       c[i]=a[i];
    for(int i=0;i<n;i++)
        c[m+i]=b[i];
    sort(c,c+m+n);
    
    for(int i=0;i<(m+n);i++)
         cout<<c[i]<<" ";
}


//Optimized Solution

void merge(int a[], int b[], int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
        while(i<m)
        {
            cout<<a[i]<<" ";
            i++;
        }
        while(j<n)
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
}
