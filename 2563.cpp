// LEETCODE POTD
// 19-04-25
// Count the Number of Fair Pairs


class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        long long count=0;
        for(int i=0;i<nums.size();i++){
            auto left=lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i]);
            auto right=upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i]);
    
            count+=right-left;
        }
        return count;
    }
};


// This solution counts all pairs \((i, j)\) with \(i < j\) such that the sum \(nums[i] + nums[j]\) lies within \([lower, upper]\).
// It sorts the array and, for each \(nums[i]\),
// uses binary search to find the range of valid \(nums[j]\) values efficiently.