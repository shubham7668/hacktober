void setMatrixZeros(int A[][], int M, int N)  
{  
   int temp[M][N]  
   for (i = 0 to M-1)  
        for (j = 0 to N-1)  
            temp[i][j] = 1  
   for(i = 0 to M - 1)  
    {  
        for (j = 0 to N - 1)  
        {  
            if (A[i][j] == 0)  
            {  
                for (k = 0 to M - 1)  
                    temp[k][j] = 0  
                for (k = 0 to N - 1)  
                    temp[i][k] = 0  
            }  
        }  
    }  
   for (i = 0 to M-1)  
        for (j = 0 to N-1)  
            arr[i][j] = temp[i][j]   
}  
