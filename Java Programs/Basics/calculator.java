package com.abhi;

import java.sql.SQLOutput;
import java.util.Scanner;

public class calculator {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter operater");
        char ch=sc.next().trim().charAt(0);

            System.out.println("Enter first");
            int a = sc.nextInt();
            System.out.println("Enter second number");
            int b = sc.nextInt();
            if (ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '%') {
                if (ch == '+')
                    System.out.println(a + b);
                else if (ch == '-')
                    System.out.println(a - b);
                else if (ch == '/'&& b!=0)
                    System.out.println(a / b);
                else if (ch == '*')
                    System.out.println(a * b);
                else
                    System.out.println(a % 10);

            System.out.println("\t\t\tNEW CALCULATION");
        }

    }
}
