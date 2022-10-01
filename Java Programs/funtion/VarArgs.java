package com.abhi.funtion;

import java.util.Arrays;

public class VarArgs {
    public static void main(String[] args) {
        fun(1,2,3,4,45,3,532,2);
        multiple(2,3,"abhinav","Tripathi");
    }
    static void multiple(int m, int n, String ...v ){
        System.out.println("value of M and N    " + m +"      "+n);
        System.out.println(Arrays.toString(v));
    }
    static void fun(int ...a){
        System.out.println(Arrays.toString(a));
    }
}
