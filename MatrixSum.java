/*
 * LEETCODE PROBLEM NUMBER 1975
 * MAXIMUM MATRIX SUM
 */

import java.util.*;

public class MatrixSum{
    public static void main(String[] args){
        int[][] matrix = {
            {1, -2, 3},
            {-4, 5, -6},
            {7, -8, 9}
        };
        MatrixSum obj = new MatrixSum();
        System.out.println(obj.maxMatrixSum(matrix));

    }

    public long maxMatrixSum(int[][] matrix) {
        int minPos=Integer.MAX_VALUE, maxNeg=Integer.MIN_VALUE, negatives=0;
        long sum=0;
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j]<0){
                    negatives+=1;
                    sum-=(matrix[i][j]);
                    maxNeg=Math.max(maxNeg, matrix[i][j]);
                }else{
                    sum+=matrix[i][j];
                    minPos=Math.min(minPos, matrix[i][j]);
                }
            }
        }
        if((negatives&1)==0) return sum;
        return sum-2*Math.min(-maxNeg,minPos);
    }
}

/*
 * This code calculates the maximum matrix sum by flipping elements to maximize their absolute values.
 * It iterates through the matrix, summing absolute values, counting negatives,
 * and tracking the smallest positive and largest negative.
 * If negatives are odd,
 * the result is adjusted by subtracting twice the smallest penalty to maintain a maximal sum.
 */