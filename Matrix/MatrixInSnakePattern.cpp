void printSnake(int mat[R][C])
{
    for(int i=0; i<R; i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<C;j++)
               print(mat[i][j] + " ");
        }

        else
        {
            for(int j=C-1;j>=0; j--)
               print(mat[i][j] + " ");
        }
    }
}

