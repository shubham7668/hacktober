package com.abhi.funtion;

public class shadowing {
    static int x=90; //static is used in object independent things

    public static void main(String[] args) {
        System.out.println("Global variable value   "+x);
        int x;
        //System.out.println(x);  // this line will give error as scope begin when value is initialised
                x=30; //class variable
        System.out.println("Local variable value   "+x);
        fun();

    }
    static void fun(){
        System.out.println("Funtion call value      "+x);
    }
}
