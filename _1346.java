/*
 * LEETCODE PROBLEM NUMBER 1346
 * Check If N and Its Double Exist
 */


import java.util.*;

public class _1346{
    public static void main(String[] args){
        _1346 obj = new _1346();
        int[] arr1 = {10, 2, 5, 3};
        int[] arr2 = {7, 1, 14, 11};
        int[] arr3 = {3, 1, 7, 11};

        System.out.println(obj.checkIfExist(arr1)); 
        System.out.println(obj.checkIfExist(arr2)); 
        System.out.println(obj.checkIfExist(arr3)); 
    }
    public boolean checkIfExist(int[] arr) {
        HashSet<Integer> set=new HashSet<>();
        for(int num:arr){
            if(set.contains(num*2)||(num%2==0 && set.contains(num/2))){
                return true;
            }
            set.add(num);
        }
        return false;
    }
}

/*
 * The code checks if an array contains two numbers such that one is double the other.
 * It uses a HashSet to track visited numbers.
 * For each number, it checks if its double or half (if even) exists in the set.
 * If found, it returns true; otherwise, it adds the number to the set.
 */