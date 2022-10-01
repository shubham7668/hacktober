package com.abhi.funt;

import java.util.Scanner;

public class method {
    public static void main(String[] args) {
        sum();
        System.out.println("Sum by funtion call"+sum1());
    }

        static void sum(){
            Scanner sc=new Scanner(System.in);
            System.out.print("Enter First number");
            int a=sc.nextInt();
            System.out.print("Enter Second number");
            int b=sc.nextInt();
            System.out.print("Sum of these with normal call "+(a+b) );
        }
        //to return the value
    static int sum1(){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter First number");
        int a=sc.nextInt();
        System.out.print("Enter Second number");
        int b=sc.nextInt();
       // System.out.println("Sum of these  "+(a+b) );
        int sum=a+b;
        return sum;
    }
}
