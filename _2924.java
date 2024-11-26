/*
 * LEETCODE PROBELM NUMBER 2924
 * FIND CHAMPION II
 */

 import java.util.*;

 public class _2924{
    public static void main(String[] args) {
        List<List<Integer>> edges = Arrays.asList(
            Arrays.asList(0, 1),
            Arrays.asList(1, 2),
            Arrays.asList(2, 3)
        );
        int n = 4;
        _2924 solution = new _2924();
        int champion = solution.findChampion(n, edges);
        System.out.println(champion);
    }


    public int findChampion(int n, List<List<Integer>> edges) {
        int[] indegree=new int[n];

        for(List<Integer> edge:edges){
            indegree[edge.get(1)]++;
        }
        int startPoint=0;
        int champion=-1;

        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                startPoint++;
                champion=i;
            }
        }
        return startPoint==1?champion:-1;
    }
 }

 /*
  * This program finds the "champion" (starting point) in a directed graph represented by a list of edges.
    It calculates the indegree for each node,
    identifies nodes with zero indegree,
    and ensures only one such node exists.
    If exactly one node has zero indegree,
    it's the champion; otherwise, it returns -1.
  */