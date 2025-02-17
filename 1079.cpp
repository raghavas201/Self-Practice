// LEETCODE POTD 17-02-2025
// PROBLEM NUMBER 1079
// Letter Tile Possibilities


class Solution {
public:
    set<string> result;
    map<int,int>flag;
    string s;
    int numTilePossibilities(string tiles) {
        solve(tiles);
        return result.size();
    }

    void solve(string tiles){
        for(int i=0;i<tiles.size();i++){
            if(flag[i]!=1){
                s.push_back(tiles[i]);
                flag[i]=1;
                result.insert(s);
                solve(tiles);
                flag[i]=0;
                s.pop_back();
            }
        }
    }
};


// This code generates all possible unique sequences (subsequences and permutations)
// that can be formed using the characters of the given string `tiles`.
// It uses a recursive backtracking approach (`solve` function)
// to explore all possible arrangements while maintaining a set (`result`) to store unique sequences.
// The `flag` map tracks used characters to avoid duplicate selections in the recursion.
