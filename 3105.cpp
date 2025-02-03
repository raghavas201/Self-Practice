// LEETCODE
// PROBLEM NUMBER 3105  
// Longest Strictly Increasing or Strictly Decreasing Subarray

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size(), i=0, ans=0;
        int inc=1, dec=1;
        if (n==1) return 1;
        for(i=1 ;i<n; i++){
            if (nums[i]>nums[i-1]) inc++, dec=1;
            else if (nums[i]<nums[i-1]) inc=1, dec++;
            else inc=dec=1;
            ans=max({ans, dec, inc});
        } 
        return ans;   
    }
};


// This code finds the length of the longest monotonic (either increasing or decreasing) subarray in a given vector `nums`.
// It iterates through the array, updating counters for increasing (`inc`)
// and decreasing (`dec`) sequences while keeping track of the maximum length found.