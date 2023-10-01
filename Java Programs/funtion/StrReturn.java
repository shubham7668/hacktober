package com.abhi.funt;

import java.util.Scanner;

public class StrReturn {
    public static void main(String[] args) {
        System.out.println(greet());

    }
    static String greet(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Select Language for greet");
        System.out.print("Selct 1 for english,2 for hindi,3 for chinese    ");
        int a=sc.nextInt();
        if(a==1)
            return "hello";
        if(a==2)
            return "नमस्ते";
        if(a==3)
            return "你好";
        return "Enter valid value";
    }
}
