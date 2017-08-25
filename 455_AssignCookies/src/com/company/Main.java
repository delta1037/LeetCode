package com.company;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
	// write your code here

    }
}
class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);

        int i=0,j=0;
        int result=0;
        while(j<s.length&&i<g.length){
            while(j<s.length&&s[j]<g[i]){
                j++;
            }
            if (j<s.length){
                result++;
            }
            i++;
            j++;
        }
        return result;
    }
}