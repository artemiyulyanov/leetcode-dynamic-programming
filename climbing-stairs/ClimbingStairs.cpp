//
// Created by Artemii on 3/9/2026.
//

#include "ClimbingStairs.h"

int ClimbingStairs::climbStairs(int n) {
    std::vector<int> dp(n+1, -1);

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}
