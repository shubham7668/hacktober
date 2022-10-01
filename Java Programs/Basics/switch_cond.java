package com.abhi.Basics;

import java.util.Scanner;

public class switch_cond {

        public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            String s=sc.next();
            switch (s) {
                case "apple" -> System.out.println("appy");
                case "mango" -> System.out.println("Fruity");
                case "pineapple" -> System.out.println("Tropicana");
                default -> System.out.println("Enter valid chaoice ");
            }
        }


}
