#include<bits/stdc++.h>
class Solution {
public:
    int t[101];
    int solve(vector<int>& nums, int i){
        int n = nums.size();
        if(i > n-1) return 0;
        //if(i == n-1) return cost[i];

        if(t[i] != -1){
            return t[i];
        }

        int take = nums[i] + solve(nums, i+2);
        int skip = solve(nums, i+1);

        return t[i] = max(take, skip);
    }
    int rob(vector<int>& nums) {
        memset(t, -1, sizeof(t));
        int res1 = solve(nums, 0);
        return res1;
    }
};
