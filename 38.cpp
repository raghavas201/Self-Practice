// LEETCODE POTD 18-04-2025

// 38. Count and Say



class Solution {
    public:
        string countAndSay(int n) {
            if(n==1) return "1";
    
            string prev=countAndSay(n-1);
            string res="";
            int i=0;
            
            while(i<prev.size()){
                int count=1;
                while(i+1<prev.size()&&prev[i]==prev[i+1]){
                    i++;
                    count++;
                }
                res+=to_string(count)+prev[i];
                i++;
            }
            return res;
        }
    };
    
    
    // The code implements the **Count and Say** sequence using recursion.
    // For a given `n`, it generates the `(n-1)`th term,
    // then counts consecutive repeating digits to build
    // the `n`th term by appending the count followed by the digit.