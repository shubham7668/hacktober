package com.abhi;

import static java.lang.System.in;
import java.util.Scanner;

public class typecasting {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int num=(int)(11.342f);
        System.out.println("EXPLICIT TYPE CONVERION");
        System.out.println(num);
        System.out.println("higher to lower type conversion over range");
        int a =257;
        byte b=(byte)(a);
        System.out.println(b); //it will give remainder
        byte m=20;
        byte n=10;
        byte k=100;
        int l=(m*n)/k;
        System.out.println("automatic type promotion");
        System.out.println(l);
    }
}
