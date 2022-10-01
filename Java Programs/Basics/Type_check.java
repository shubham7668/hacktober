package com.abhi;


import java.util.Scanner;

public class Type_check {
    public static void main(String[] args) {
        System.out.println("Enter char you want to check");
        Scanner in=new Scanner(System.in);
        char ch=in.next().trim().charAt(0);
        System.out.println(ch);
        if(ch>='a'&&ch<='z')
            System.out.println("LOWER CASE");
        else if(ch>='A'&& ch<='Z')
            System.out.println("Upper case");
        else if(ch>'0'&& ch<='1')
            System.out.println("Digit");
        else
            System.out.println("Special CASE");
    }
}
