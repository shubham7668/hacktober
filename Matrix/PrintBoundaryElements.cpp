void bTraversal(int mat[R][C])
{
    if(R==1)
    {
        for(int i=0; i<C ;i++)
           print(mat[0][i] + " ")
    }

    else if(C==1)
    {
        for(int i=0; i<R;i++)
          print(mat[i][0] + " ")
    }

    else
    {
        for(int i=0;i<C;i++)
          print(mat[0][i]+" ")

        for(int i=1;i<R;i++)
          print(mat[i][C-1]+ " ")

        for(int i= C-2; i>=0; i--)
          print(mat[R-1][i] + " ")

        for(int i= R-2; i>=1;i--)
          print(mat[i][0] + " ")      
    }

}

//Overall Time-Complexity: Theta(R+C)