package com.abhi.Array;

import java.util.ArrayList;
import java.util.Scanner;

public class doubly_list {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        ArrayList<ArrayList<Integer>> list =new ArrayList<>();
         for(int i=0;i<3;i++){
             list.add(new ArrayList<>());
         }
         for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                 list.get(i).add(in.nextInt());
             }
         }
        for(int i=0;i<3;i++){

                //list.get(i).add(in.nextInt());
                System.out.println(list);

        }
    }
}
