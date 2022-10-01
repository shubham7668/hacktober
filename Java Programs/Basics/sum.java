package com.abhi;

import java.util.Scanner;

public class sum {
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        float a=input.nextFloat();
        float c=input.nextFloat();
        int b= input.nextInt();
        System.out.println("SUM OF ENTERED NUMBER IS  "+(a+b));
        System.out.println("SUM OF NEXT FLOAT NUMBERS"+(a+c));
    }
}
