package com.abhi;

import java.sql.SQLOutput;

public class condition_and_loops {
    public static void main(String[] args) {
        System.out.println("CONTIONING STATEMENT");
        int a = 10;
        if (a == 10)
            System.out.println("VALUE OF A IS 10");
        System.out.println("while loop");
        int t = 5;
        while (t > 0) {
            System.out.print(t + "  ");
            t--;
        }
        System.out.println("\nFOR LOOP");
        for (int i = 0; i < 5; i++)
            System.out.print(i+"  ");
    }
}

