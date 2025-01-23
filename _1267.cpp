// LEETCODE PROBLEM NUMBER 1267
// Count Servers that Communicate



#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> Rows(grid.size());
        vector<int> Col(grid[0].size());
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                Rows[i] += grid[i][j];
                Col[j] += grid[i][j];
            }
        }
        
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1 && (Rows[i] > 1 || Col[j] > 1)) {
                    ans++;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> grid = {
        {1, 0},
        {0, 1}
    };
    cout << "Number of servers that can communicate: " << solution.countServers(grid) << endl;

    vector<vector<int>> grid2 = {
        {1, 0, 1},
        {1, 0, 0},
        {0, 0, 1}
    };
    cout << "Number of servers that can communicate: " << solution.countServers(grid2) << endl;

    return 0;
}
