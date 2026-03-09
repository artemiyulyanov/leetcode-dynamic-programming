//
// Created by Artemii on 3/9/2026.
//

#include "PascalTriangle.h"

std::vector<std::vector<int>> PascalTriangle::generate(int numRows) {
    std::vector<std::vector<int>> dp(numRows, std::vector<int>{});

    dp[0] = {1};

    if (numRows >= 2) {
        dp[1] = {1, 1};
    }

    for (int i = 2; i < numRows; i++) {
        dp[i].push_back(1);

        for (int j = 0; j < dp[i - 1].size() - 1; j++) {
            dp[i].push_back(dp[i - 1][j] + dp[i - 1][j + 1]);
        }

        dp[i].push_back(1);
    }

    return dp;
}
