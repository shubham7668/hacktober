package com.abhi;

import java.util.Scanner;

public class largest_num {
    public static void main(String[] args) {
        System.out.println("PROGRAM FOR LARGEST NUMBER ");
        System.out.print("Enter Your Choice");
        Scanner sc=new Scanner(System.in);

        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        if(a>b&&a>c)
            System.out.println(a+" is largest");
        else if(b>a&&b>c)
            System.out.println(b+" is greatest");
        else
            System.out.println(c+" is greatest");
    }
}
