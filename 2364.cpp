// LEETCODE POTD
// PROBLEM NUMBER 2364
// Count Number of Bad Pairs


class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> freq;
        long long goodPairs=0,n=nums.size();

        for(int i=0;i<n;i++){
            int key=nums[i]-i;
            goodPairs+=freq[key];
            freq[key]++;
        }
        return (n*(n-1))/2-goodPairs;
    }
};



// This code counts the number of "bad pairs" \((i, j)\) in the array `nums`,
// where \( i < j \) and \( nums[j] - nums[i] \neq j - i \).
// It does this by first calculating the total number of pairs \((n \times (n-1))/2\)
// and then subtracting the number of "good pairs" that satisfy \( nums[j] - j = nums[i] - i \).
// A hash map (`freq`) is used to efficiently count occurrences of each unique value of \( nums[i] - i \).