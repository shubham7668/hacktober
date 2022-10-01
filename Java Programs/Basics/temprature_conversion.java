package com.abhi;

import java.util.Scanner;

public class temprature_conversion {
    public static void main(String[] args) {
        System.out.println("PROMGRAM FOR CONVERSION OF TEMPRATURE ");
        Scanner sc=new Scanner(System.in);
        System.out.println("ENTER CELSIOUS TEMPRATURE");
            float ctemp=sc.nextFloat();
            float ftemp=(ctemp*9/5)+32;
        System.out.println("    TEMPTRATURE CONVESION TO FAHRENHIET :   "+ftemp);
    }
}
