// LEETCODE POTD 11-02-2025
// PROBLEM NUMBER 1910
// Remove All Occurrences of a Substring

class Solution {
public:
    string removeOccurrences(string s, string part){
        string result;
        int n=s.length();
        int m=part.length();
        
        for (char ch:s) {
            result.push_back(ch);
            if (result.size()>=m) {
                if (result.substr(result.size()-m)==part){
                    result.resize(result.size()-m);
                }
            }
        }
        return result;
    }
};


// This C++ function removes all occurrences of the substring `part` from the string `s` iteratively.
// It builds the result string character by character and checks if the last `m` characters match `part`.
// If a match is found, those characters are removed, ensuring all occurrences are eliminated efficiently.