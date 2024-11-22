/*
 * LEETCODE PROBLEM NUMBER 2516
 * TAKE K OF EACH CHARACTER FROM LEFT AND RIGHT
 */

import java.util.*;

public class LAR {
     public static void main(String[] args) {
         Solution solution = new Solution();
         String s = "aabaaaacaabc";
         int k = 2;
         int result = solution.takeCharacters(s, k);
         System.out.println(result);
     }
 }
 
 class Solution {
     public int takeCharacters(String s, int k) {
         int n = s.length();
         int[] freq = new int[3];
         int left = 0;
 
         while (left < n && (freq[0] < k || freq[1] < k || freq[2] < k)) {
             freq[s.charAt(left) - 'a']++;
             left++;
         }
 
         if (freq[0] < k || freq[1] < k || freq[2] < k) {
             return -1;
         }
 
         int shortest = left;
         left--;
         int right = n - 1;
 
         while (left >= 0) {
             freq[s.charAt(left) - 'a']--;
             left--;
 
             while (left <= right && (freq[0] < k || freq[1] < k || freq[2] < k)) {
                 freq[s.charAt(right) - 'a']++;
                 right--;
             }
 
             shortest = Math.min(shortest, n - (right - left));
         }
 
         return shortest;
     }
 }
 


 /*
  *  This code determines the shortest substring from the beginning and end of a given string `s`
     that contains at least `k` occurrences of each character ('a', 'b', 'c').
     It uses a sliding window approach with frequency counting to track valid substrings and minimize their length,
     returning `-1` if impossible.
  */