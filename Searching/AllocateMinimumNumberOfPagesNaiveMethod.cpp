//We need to choose (K-1) cuts out of (n-1) cuts shown above

// Total Ways= n-1 
//                 C
//                    k-1

// example: [10, 20, 30,40]
// k=2
// So we need to choose 1 cut out of 3 cuts

//Pseudo-Code Implementation

int minPages(int arr[], int n, int k)
{
    if(k==1)
      return sum(arr,0,n-1);
    if(n==1)
      return arr[0];
    int res= INT_MAX;
    
    for(int i=1;i<n;i++)   
      res= min(res, max(minPages(arr,i,k-1),sum(arr,i,n-1)));


  return res;    
}


int sum(int arr[],int b, int e)
{
    int s=0;
    for(int i=b;i<=e;i++)
      s+=arr[i];

   return s;   

}
