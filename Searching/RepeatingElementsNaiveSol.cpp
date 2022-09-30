//Super Naive Approach : Time and O(n^2) Space

for(int i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
     if(arr[i]==arr[j])
        return arr[i];


//Naive Solution : O(nlogn) Time and O(1) Space

//1. Sort the Array: arr[] = { 0,1,2,2,2,3}
 for(int i=0;i<n-1;i++)
   if(arr[i]==arr[i+1])
    return arr[i];

    


// Efficient Approach : O(n) Time and O(n) Aux Space

// arr[]={0,2,1,3,2,2}

// 1. Create a boolean array of size n
//        visited={F,F,F,F,F,F}
// 2. for(int i=0;i<n;i++)
//     {
//         if(visited[arr[i]])
//            return arr[i];

//         visited[arr[i]] = true;   

//     }       
