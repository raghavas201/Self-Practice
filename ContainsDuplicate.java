/* LEETCODE QUESTION NUMBER 217
 * CONTAINS DUPLICATE
 */


import java.util.*;
public class ContainsDuplicate{
    public static void main(String[] args){
        int[] nums={1,2,3,1};
        System.out.println(containsduplicate(nums));
    }

    public static boolean containsduplicate(int[] nums){
        Map<Integer,Integer>hm=new HashMap<Integer,Integer>();
        for(int i=0;i<nums.length;i++){
            if(hm.containsKey(nums[i])){
                return true;
            }
        else{
            hm.put(nums[i],i);
        }
    }
    return false;
}
}

/*
 * This code checks for duplicates in an integer array. 
 * It uses a HashMap to store each unique element as it iterates through the array. 
 * If an element is found in the HashMap (indicating a duplicate), it returns `true`. 
 * If no duplicates are found after the loop, it returns `false`.
 */