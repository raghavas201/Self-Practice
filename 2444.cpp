// LEETCODE POTD 26-05-2025
// PROBLEM NUMBER 2444
// Count Subarrays With Fixed Bounds

class Solution {
    public:
        long long countSubarrays(vector<int>& nums, int minK, int maxK) {
            long count=0, start=-1,mini=-1,maxi=-1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<minK||nums[i]>maxK) start=i;
                if(nums[i]==maxK)maxi=i;
                if(nums[i]==minK)mini=i;
                int valid=max(0L,min(mini,maxi)-start);
                count+=valid;
            }
            return count;
        }
    };


// This code counts subarrays where the minimum is `minK` and the maximum is `maxK`.
// It tracks the most recent valid positions of `minK`, `maxK`,
// and invalid elements to compute the number of valid subarrays ending at each index.