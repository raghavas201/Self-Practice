/*
 * LEETCODE PROBLEM NUMBER 1861
 * ROTATING THE BOX
 */

 public class RotateBox {
    public static void main(String[] args) {
        char[][] box = {
            {'#', '.', '#'},
            {'#', '#', '*'},
            {'#', '.', '.'}
        };
        Solution solution = new RotateBox().new Solution();
        char[][] rotatedBox = solution.rotateTheBox(box);

        for (char[] row : rotatedBox) {
            System.out.println(new String(row));
        }
    }

    class Solution {
        public char[][] rotateTheBox(char[][] box) {
            int m = box.length, n = box[0].length;
            char[][] ans = new char[n][m];

            for (int i = 0; i < m; i++) {
                char[] row = applyGravity(box[i]);
                for (int j = 0; j < n; j++) {
                    ans[j][m - 1 - i] = row[j];
                }
            }
            return ans;
        }

        private char[] applyGravity(char[] row) {
            int stones = 0, cells = 0;

            for (int i = 0; i < row.length; i++) {
                if (row[i] == '*') {
                    int j = i - 1;
                    while (cells-- > 0) {
                        if (stones > 0) {
                            stones--;
                            row[j] = '#';
                        } else {
                            row[j] = '.';
                        }
                        j--;
                    }
                } else if (row[i] == '#') {
                    stones++;
                }
                cells++;
            }

            int j = row.length - 1;
            while (cells-- > 0) {
                if (stones > 0) {
                    stones--;
                    row[j] = '#';
                } else {
                    row[j] = '.';
                }
                j--;
            }

            return row;
        }
    }
}


/*
 * This code solves the "Rotating the Box" problem by simulating gravity on stones (#)
 * in each row while accounting for obstacles (*). It then rotates the box 90 degrees clockwise,
 * converting rows into columns in a new matrix.
 * The process ensures stones settle correctly at the bottom of their sections.
 */