//
// Created by Artemii on 3/30/2026.
//

#include "MinimumPathSum.h"

int MinimumPathSum::minPathSum(std::vector<std::vector<int>> &grid) {
    size_t m = grid.size();
    size_t n = grid[0].size();

    std::vector<std::vector<int>> dp(m, std::vector(n, 0));

    dp[0][0] = grid[0][0];

    for (int i = 1; i < n; i++) {
        dp[0][i] = dp[0][i - 1] + grid[0][i];
    }

    for (int j = 1; j < m; j++) {
        dp[j][0] = dp[j - 1][0] + grid[j][0];
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (i == 0 || j == 0) continue;

            dp[j][i] = std::min(dp[j][i - 1], dp[j - 1][i]) + grid[j][i];
        }
    }

    return dp[m - 1][n - 1];
}