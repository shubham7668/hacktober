package com.abhi;

import java.util.Scanner;

public class fibonnaci {
    public static void main(String[] args) {
        //program for fibonacci number
        int a = 0;
        int b = 1;
        System.out.println("Enter termination Number ");
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        System.out.print(a + "  " + b + "  ");
        for (int i = a+b; i < t;  i = a + b) {
            System.out.print("  "+i+"  ");
            a = b;
            b = i;
        }
    }
}
