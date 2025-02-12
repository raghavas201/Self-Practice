// LEETCODE POTD 12-02-2025
// PROBLEM NUMBER 2342
// Max Sum of a Pair With Equal Sum of Digits

#include<bits/stdc++.h>
class Solution {
    int getDigitSum(int val){
        int sum=0;
        while(val){
            sum+=val%10;
            val/=10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> sum_maxval;
        int max_sum=-1;
        for(int ele:nums){
            int digit_sum=getDigitSum(ele);
            if(sum_maxval.count(digit_sum)){
                max_sum=max(max_sum,ele+sum_maxval[digit_sum]);
                if(sum_maxval[digit_sum]<ele)
                    sum_maxval[digit_sum]=ele;
            }else{
                sum_maxval[digit_sum]=ele;
            }
        }
        return max_sum;
    }
};


// This code defines a solution to find the maximum sum of two numbers from a list where their digit sums are equal.
// The `getDigitSum` function calculates the sum of the digits of a number.
// The `maximumSum` function uses an unordered map to track the largest number for each unique digit sum.
// For each number, it checks if a previous number with the same digit sum exists, and if so, it updates the maximum sum.