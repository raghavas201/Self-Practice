// LEETOCDE POTD 1-02-2025
//  3151. Special Array I

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]%2==nums[i+1]%2){
                return false;
            }
        }
        return true;
    }
};


// This function checks whether the given array alternates between even and odd numbers.
// It iterates through the array and returns false if two consecutive elements have the same parity (both even or both odd);
// otherwise, it returns true.