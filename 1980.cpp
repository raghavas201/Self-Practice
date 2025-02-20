// LEETCODE POTD 20-02-2025
// PROBLEM NUMBER 1980
// FIND UNIQUE BINARY STRING


class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string ans="";
        for(int i=0;i<nums.size();i++){
            ans+=(nums[i][i]=='0')?'1':'0';
        }
        return ans;
    }
};

// Cantor’s Trick (Best) (TC - O(n), SC - O(n))

// Uses Cantor's Diagonalization to construct a missing string.
// Flip the diagonal elements (nums[i][i]):
// If nums[i][i] is '0', append '1'.
// If nums[i][i] is '1', append '0'.
// Ensures the result is unique and missing from nums.