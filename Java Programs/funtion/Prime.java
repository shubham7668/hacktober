package com.abhi.funtion;

import java.util.Scanner;

public class Prime {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
                int a=sc.nextInt();
                boolean ans=prime(a);
        System.out.println(ans);
    }
    static boolean prime(int n) {
        int i = 2;
        if (n <= 1)
            return false;
        while (i * i <= n) {
            if (n % i == 0) {
                return false;
            }
            i++;
        }
        return true;
    }

    }

