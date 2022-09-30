//Naive Solution

void transpose(int mat[n][n])
{
    int temp[n][n];
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
         temp[i][j] = mat[j][i];

    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
         mat[i][j]= temp[i][j];     
}


//Efficient Solution
//It is In-Place and One Traversal

//pseudo-code
void transpose(int mat[n][n])
{
    for(int i=0;i<n;i++)
      for(int j=i+1; j<n;j++)
          swap(mat[i][j], mat[j][i]);
}
