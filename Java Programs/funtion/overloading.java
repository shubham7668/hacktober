package com.abhi.funtion;

public class overloading {
    public static void main(String[] args) {
        fun(34);
        fun("abhinav");
    }
    static void fun(int a){
        System.out.println(a);
    }
    static void fun(String a){
        System.out.println(a);
    }
}
