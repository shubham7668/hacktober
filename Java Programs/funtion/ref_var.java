package com.abhi.funtion;

public class ref_var {
    public static void main(String[] args) {
        String name="abhi";
        change(name);
        System.out.println("Value After funtion call   "+name);
    }
    static void change(String naam){
        naam="tripathi";
        System.out.println("Value in funtion call      "+naam);
    }
}
