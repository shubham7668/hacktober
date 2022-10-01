package com.abhi.funtion;

public class swap_funtion {
    public static void main(String[] args) {
       int a=2;
       int b=3;
        swap(a,b);
        System.out.println("Value of a and b before   "+a+"   "+b);
    }
    static void swap(int a,int b){
        int temp;
        temp=a;
        a=b;
        b=temp;
        System.out.println("value of a:"+a);
        System.out.println("Value of b:"+b);
    }
}
