package com.abhi;

import java.util.Scanner;

public class reverse {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int rem=0;
        int sum=0;
        while(a>0){
        rem=a%10;
            a=a/10;
        sum=rem+(sum*10);


        }
        System.out.println("Reversed  "+sum);
    }
}
