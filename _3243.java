/*
 * LEETCODE QUESTION NUMBER 3243
 * Shortest Distance After Road Addition Queries I
 */
 import java.util.*;

 public class _3243{
     public static void main(String[] args) {
         int n = 4;
         int[][] queries = {{0, 3}, {1, 3}, {2, 3}};
         _3243 solution = new _3243();
         List<Integer> result = solution.shortestDistanceAfterQueries(n, queries);
         System.out.println(result);
     }
 
     private int shortestPath(List<List<Integer>> adj, int n) {
         Queue<Integer> queue = new LinkedList<>();
         queue.add(0);
         boolean[] visited = new boolean[n];
         visited[0] = true;
         int distance = 0;
 
         while (!queue.isEmpty()) {
             int size = queue.size();
             for (int i = 0; i < size; ++i) {
                 int curr = queue.poll();
                 if (curr == n - 1) {
                     return distance;
                 }
                 for (int neighbor : adj.get(curr)) {
                     if (!visited[neighbor]) {
                         visited[neighbor] = true;
                         queue.add(neighbor);
                     }
                 }
             }
             distance++;
         }
         return -1;
     }
 
     public List<Integer> shortestDistanceAfterQueries(int n, int[][] queries) {
         List<List<Integer>> adj = new ArrayList<>();
         for (int i = 0; i < n; ++i) {
             adj.add(new ArrayList<>());
         }
         for (int i = 0; i < n - 1; ++i) {
             adj.get(i).add(i + 1);
         }
 
         List<Integer> result = new ArrayList<>();
         for (int[] query : queries) {
             adj.get(query[0]).add(query[1]);
             result.add(shortestPath(adj, n));
         }
         return result;
     }
 }
 