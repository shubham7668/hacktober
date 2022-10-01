package com.abhi.funtion;

import java.util.Scanner;

public class armstrong {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        System.out.println(cal(a)+"\n\n");
        System.out.println("Three digit Armstrong Number");
        for(int i=100;i<1000;i++){
            if(cal(i))
            System.out.print(i);
        }
    }
//three digit Armstrong
    static boolean cal(int num){
        int rem=0,sum=0;
        int dup=num;
       while(num>0) {
           rem = num % 10;
           sum += rem * rem * rem;
           num = num / 10;
       }
       if(sum==dup)
        return true;
       else
           return false;
    }
}