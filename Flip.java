/*
 * LEETCODE PROBLEM NUMBER 1072
 * Flip Columns For Maximum Number of Equal Rows
 */

 import java.util.*;

 public class Flip {
     public static void main(String[] args) {
         int[][] matrix = {{0, 1}, {1, 0}, {1, 1}};
         Flip flip = new Flip();
         System.out.println(flip.maxEqualRowsAfterFlips(matrix));
     }
 
     public int maxEqualRowsAfterFlips(int[][] matrix) {
         Map<String, Integer> relativeFreq = new HashMap<>();
         for (int[] row : matrix) {
             int first = row[0];
             StringBuilder curr = new StringBuilder();
             for (int ele : row) {
                 if (ele == first) {
                     curr.append('0');
                 } else {
                     curr.append('1');
                 }
             }
             String key = curr.toString();
             relativeFreq.put(key, relativeFreq.getOrDefault(key, 0) + 1);
         }
         int maxFreq = 0;
         for (int freq : relativeFreq.values()) {
             maxFreq = Math.max(maxFreq, freq);
         }
         return maxFreq; // Ensure the method always returns an int
     }
 }
 
 /*
  * This code computes the maximum number of rows in a binary matrix that can be made equal by flipping columns.
    It uses a hashmap to group rows based on their relative patterns (converted to "0s" and "1s" depending on the first element).
    The frequency of each pattern is tracked, and the maximum frequency is returned.
  */