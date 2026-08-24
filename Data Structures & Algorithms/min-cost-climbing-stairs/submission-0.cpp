#include <bits/stdc++.h>
class Solution {
public:
    int t[101];
    int solve(vector<int>& cost, int i){
        int n = cost.size();
        if(i > n-1) return 0;
        if(i == n-1) return cost[i];

        if(t[i] != -1){
            return t[i];
        }

        int one_step = cost[i] + solve(cost, i+1);
        int two_step = cost[i] + solve(cost, i+2);

        return t[i] = min(one_step, two_step);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(t, -1, sizeof(t));
        int res1 = solve(cost, 0);
        int res2 = solve(cost, 1);
        return min(res1, res2);
    }
};
