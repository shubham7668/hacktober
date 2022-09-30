//Naive Approach
//Last column becomes first row
//second last column becomes the second row.

//Time and Aux. Space Complexity: Theta(n^2)

void rotate90(int mat[R][C])
{
    int temp[n][n];
    for(int i=0; i<n; i++)
       for(int j=0;j<n;j++)
         temp[n-j-1][i] = mat[i][j];

    for(int i=0; i<n;i++)
      for(int j=0;j<n;j++)
        mat[i][j]= temp[i][j];

}


//efficient solution:
//First make the Transpose Matrix and then Reverse the Individual Columns

void rotate90(int mat[n][n])
{
    for(int i=0; i<n;i++)
      for(int j=i+1; j<n; j++)
        swap(mat[i][j], mat[j][i]);

    for(int i=0;i<n;i++)
    {
        int low=0, high= n-1;

        while(low<high)
        {
            swap(mat[low][i], mat[high][i]);
            low++;
            high--;
        }
    }    
}
