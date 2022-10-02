package com.abhi.Array;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Primitive_arr {
    public static void main(String[] args) {
        int[] arr = new int[5];
        Scanner sc = new Scanner(System.in);
        for (int num = 0; num < arr.length; num++) {
            arr[num] = sc.nextInt();
        }
        System.out.println(Arrays.toString(arr));
        for (int num : arr) {
            System.out.print(num+"  ");
        }
    }
}


