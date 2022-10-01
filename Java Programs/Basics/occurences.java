package com.abhi;

import java.util.Scanner;

public class occurences {
    public static void main(String[] args) {
        System.out.println("Enter the number whose occurences you want to calculate");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int k=0;
        while(a>0){
            if(a%10==7)
                k++;
            a=a/10;

        }
        System.out.println(k);
    }
}
