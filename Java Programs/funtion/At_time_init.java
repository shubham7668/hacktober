package com.abhi.funt;

import java.util.Scanner;

public class At_time_init {
    public static void main(String[] args) {
sum(20,2230);

            Scanner sc=new Scanner(System.in);
            System.out.print("Enter First number");
            int a=sc.nextInt();
            System.out.print("Enter Second number");
            int b=sc.nextInt();
            sum(a,b);
    }
    static void sum(int a,int b){
        System.out.println("Sum of initialised value by funtion pass "+(a+b) );
    }
}
