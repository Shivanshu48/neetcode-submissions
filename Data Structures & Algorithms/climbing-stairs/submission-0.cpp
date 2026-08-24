#include <bits/stdc++.h>
class Solution {
public:
    int t[46];
    int solve(int n, int i){
        if(i > n) return 0;
        if(i == n){
            return 1;
        }

        if(t[i] != -1){
            return t[i];
        }

        int one_step = solve(n, i+1);
        int two_step = solve(n, i+2);

        return t[i] = one_step + two_step;
    }
    
    int climbStairs(int n) {
        memset(t, -1, sizeof(t));
        int res = solve(n, 0);
        return res;
    }
};
