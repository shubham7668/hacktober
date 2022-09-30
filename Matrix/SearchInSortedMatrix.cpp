//Pseudo Code
//Naive Solution: O(R x C) time
void search(int mat[R][C], int x)
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(mat[i][j]==x)
            {
                print("Found at C"+ i + ","+j+",");
                return;
            }
        }
    }
    print("Not Found");
}


//Efficient Solution: O(R + C)

//Begin from the top right corner.
//If x is same, print position and return
//If x is smaller, move left       in case if we use Bottom Left Corner of the Matrix:Right If x is smaller
//If x is greater, move down                                                          Up If x is greater


void search(int mat[R][C], int x)
{
    int i=0, j= C-1;
    while(i<R && j>=0)
    {
        if(mat[i][j]==x)
        {
            print("Found at ("+i+","+j+")");
            return;
        }

        else if(mat[i][j] > x)
           j--;

        else  
           i++; 
    }

    print("Not Found");
}

