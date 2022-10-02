package com.abhi.Array;

import org.w3c.dom.ls.LSOutput;

public class Swaparr {
    public static void main(String[] args) {
        int []arr={1,2,3,4,5};
        swap(arr,0,4);


    }
    static void swap(int []arr,int s,int e){
        while(s<e){
            int temp;
            temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
        for(int i=0;i<arr.length;i++)
            System.out.println(arr[i]);
    }

}
