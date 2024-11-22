/*
 * LEETCODE PROBLEM NUMBER 1
 * TWO SUM
 */

import java.util.*;
public class TwoSum{
    public static void main(String[] args){
        int[] nums={3,3};
        System.out.println(Arrays.toString(twoSum(nums,6)));
            }
        
            public static int[] twoSum(int[] nums,int target){
        HashMap<Integer,Integer> hm=new HashMap<Integer, Integer>();
        for(int i=0;i<nums.length;i++){
            int req_num=target-nums[i];
            if(hm.containsKey(req_num)){
                int[] arr={hm.get(req_num),i};
                return arr;
            }
            hm.put(nums[i],i);
        }
        return null;
    }
}

/*
 *  This code finds two numbers in an array `nums` that add up to a given `target`.
 *  It uses a HashMap to store previously seen numbers and their indices.
 *  For each number, it checks if the complement (target - current number) is in the map.
 *  If found, it returns the indices of the two numbers.
 */