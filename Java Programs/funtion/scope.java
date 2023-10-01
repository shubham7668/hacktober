package com.abhi.funtion;

public class scope {
    public static void main(String[] args) {
        int a=10;
        {
            //if initialised in this block then used in this block only
            a=100;//reassigning value in this block
            System.out.println(a);
        }
        for(int i=0;i<5;i++){


            a=1000;
        }
        //System.out.println(a);
        System.out.println(a);
    }
}
