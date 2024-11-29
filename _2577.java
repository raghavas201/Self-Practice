/*
 * LEETCODE PROBLEM NUMBER 2577
 * Minimum Time to Visit a Cell In a Grid
 */

 import java.util.*;

 public class _2577{
    public static void main(String[] args) {
        int[][] grid = {
            {0, 2, 4},
            {3, 2, 1},
            {1, 1, 0}
        };
        _2577 obj = new _2577();
        System.out.println(obj.minimumTime(grid));
    }
    public int minimumTime(int[][] grid) {
        int[] dir=[-1,0,1,0,-1];
        int m=grid.lenght;
        int n=grid[0].length;
        if(grid[0][1]>1+grid[0][0] && grid[1][0]>1+grid[0][0])
        return -1;

        boolean[][] visited=new boolean[m][n];
        PriorityQueue<int[]> minHeap=new PriorityQueue<>((a,b)->Integer.compare(a[0], b[0]));
        minHeap.offer(new int[]{0,0,0});
        visited[0][0]=true;

        while(!minHeap.isEmpty()){
            int[] curr=minHeap.poll();
            int time=curr[0];
            int x=curr[1];
            int y=curr[2];

            for (int i = 0; i < 4; ++i) {
                int newX = x + dir[i];
                int newY = y + dir[i + 1];
                if (newX >= 0 && newX < m && newY >= 0 && newY < n && !visited[newX][newY]) {
                    visited[newX][newY] = true;
                    int newTime = time + 1;
                    if (grid[newX][newY] > newTime)
                        newTime = (grid[newX][newY] - time) % 2 == 1 ? grid[newX][newY] : grid[newX][newY] + 1;
                    minHeap.offer(new int[]{newTime, newX, newY});
                }
            }
        }
        return -1;
    }
}