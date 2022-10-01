package com.abhi.Basics;

import java.util.Scanner;

public class nested_switch {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter employee number");
        int emp=sc.nextInt();
        System.out.println("Enter Department");
        String s=sc.next();
        switch(emp){
            case 1:
                switch (s) {
                    case "CS" -> System.out.println("Your emp id is " + emp + "\t\t department is  " + s);
                    case "CSE" -> System.out.println("Your emp id is " + emp + "\t\t department is  " + s);
                    case "ME" -> System.out.println("Your emp id is " + emp + "\t\t department is  " + s);
                }
                break;
            case 2:
                switch (s) {
                    case "CS" -> System.out.println("Your emp id is " + emp + "\t\t department is  " + s);
                    case "CSE" -> System.out.println("Your emp id is " + emp + "\t\t department is  " + s);
                    case "ME" -> System.out.println("Your emp id is " + emp + "\t\t department is  " + s);
                }
                break;
            case 3:
                switch (s) {
                    case "CS" -> System.out.println("Your emp id is " + emp + "\t\t department is  " + s);
                    case "CSE" -> System.out.println("Your emp id is " + emp + "\t\t department is  " + s);
                    case "ME" -> System.out.println("Your emp id is " + emp + "\t\t department is  " + s);
                }
                break;
            default:
                System.out.println("Enter a valid emp id");
        }
    }
}
