// LEETCODE POTD 7TH FEB 2025
// PROBLEM NUMBER 3160
// Find the Number of Distinct Colors Among the Balls



class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n=queries.size();
        unordered_map<int,int> color_freq;
        unordered_map<int,int> ball_color;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            int ball=queries[i][0];
            int color=queries[i][1];

            if(ball_color.count(ball)){
                color_freq[ball_color[ball]]--;
                if(color_freq[ball_color[ball]]==0)
                    color_freq.erase(ball_color[ball]);
            }
            ball_color[ball]=color;
            color_freq[color]++;

            res[i]=color_freq.size();
        }
        return res;
    }
};


// This code processes a series of queries where each query assigns a color to a ball.
// It tracks the frequency of each color and the current color of each ball using hash maps.
// After updating the color of a ball,
// it maintains the count of distinct colors in use and stores the results for each query.