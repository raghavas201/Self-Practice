/* LEETCODE QUESTION NUMBER 242
 * VALID ANAGRAM
 */



 public class ValidAnagram{
    public static void main(String[] args){
        String s="rat";
        String t="car";
        System.out.println(isAnagram(s,t));
    }

    public static boolean isAnagram(String s, String t){
      int m=s.length();
      int n=t.length();
      if(m!=n){
         return false;
      }else{
         int count[]=new int[26];
         for(int i=0;i<m;i++){
            count[s.charAt(i)-'a']++;
         }
         for(int i=0;i<n;i++){
            count[t.charAt(i)-'a']--;
         }

         for(int i=0;i<count.length;i++){
            if(count[i]!=0){
               return false;
            }
         }
         return true;
      }

    }
 }

/*
 * This code checks if two strings, `s` and `t`, are anagrams.
 *  It compares their lengths first; if they differ, it returns `false`.
 *  Then, it uses an integer array to count the occurrences of each character in both strings.
 *  If the counts match, the strings are anagrams, and it returns `true`; otherwise, `false`.
 */