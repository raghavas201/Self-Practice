// LEETCODE POTD 2-02-2025
// PROBLEM NUMBER 1752 
// CHECK IS ARRAY IS SORTED AND ROTATED

#inlcude<bits/stdc++.h>

class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size(),count=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]) count++;
        }
        if(nums[n-1]>nums[0]) count++;
        if(count<=1) return true;
        else return false;
    }
};

// This code checks whether a given array `nums` is a rotated sorted array.
// It counts the number of times the order is violated (`nums[i] < nums[i-1]`).
// If the count is at most 1 (including the wrap-around case `nums[n-1] > nums[0]`),
// the array is considered a rotated sorted array and returns `true`;
// otherwise, it returns `false`.