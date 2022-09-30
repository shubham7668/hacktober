//pseudo code

//Just Remember this thing : First print top row then print the right column then print the bottom row then print the left column.

void printSpiral(int mat[][], int R, int C)
{
    int top=0, left=0, bottom= R-1, right= C-1;
    while(top<= bottom && left<=right)
    {
      //for top row
        for(int i= left; i<=right; i++)
          print(mat[top][i] + " ");

        top++;

      //for Right Column  

        for(int i= top; i<=bottom; i++)
           print(mat[i][right] + " ");

        right--;

      //For Bottom Row (Reverse Order)  

        if(top<=bottom){
            for(int i= right; i>= left; i--)
              print(mat[bottom][i] + " ");

            bottom--;  
        }


      //For Left Column(Reverse Order)  

        if(left<=right)
        {
            for(int i= bottom; i>=top; i--)
               print(mat[i][right] + " ");

            left++;   
        }        
    }
}

//Time Complexity : Theta(R*C) 