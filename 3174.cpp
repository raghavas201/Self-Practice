// LEETCODE POTD 10-02-2025
// PROBLEM NUMBER 3174
// Clear Digits



class Solution {
public:
    string clearDigits(string s) {
        string r="";
        for(char c:s){
            if(isdigit(c)){
                if(!r.empty()){
                    r.pop_back();
                }
            }else{
                r.push_back(c);
            }
        }
        return r;
    }
};



// This function removes digits from the input string `s` and deletes the character before each digit.
// It iterates through `s`, appending non-digit characters to `r`, and when a digit is encountered,
// it removes the last character from `r` (if not empty). The final string is returned.