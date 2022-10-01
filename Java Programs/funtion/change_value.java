package com.abhi.funtion;

import java.lang.reflect.Array;
import java.util.Arrays;

public class change_value {
    public static void main(String[] args) {
        int []arr={1,3,2,45,6};
        System.out.println(Arrays.toString(arr));
        change(arr);
       //value updated in funtion
        System.out.println(Arrays.toString(arr));
    }
    static void change(int[] nums){
        nums[0]=98;
    }
}
