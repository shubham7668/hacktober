package com.abhi.funtion;

public class String_pass {
    public static void main(String[] args) {
        String name="abhi";
        change(name);
        System.out.print("When funtion is called directly      ");
        System.out.println(change(name));
        System.out.print("When value is only called              ");
        System.out.print(name);//Creation of new object
    }
    static String change(String naam){
        naam="tripathi";

        return naam;
    }
}
