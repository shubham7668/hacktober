package com.abhi.Array;

import java.util.Arrays;
import java.util.Scanner;

public class Two_Dim {
    public static void main(String[] args) {

        int [][] a2 ={
                {1,2,3},
        {1,4,5},
        {6,2,5}};
        Scanner sc=new Scanner(System.in);
        int [][]a=new int[3][];
        //input
        for(int row=0;row<a.length;row++){
          for(int col=0;col< a[row].length;col++) {
              a[row][col] = sc.nextInt();
            }
        }
        //output
        for (int[] ints : a) {
            for (int anInt : ints) {
                System.out.println(anInt);
            }
            System.out.println("\n");
        }

      for(int[] r:a
      ){
          System.out.println(Arrays.toString(r));
      }
    }
}
