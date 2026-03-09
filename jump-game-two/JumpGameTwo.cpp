//
// Created by Artemii on 3/9/2026.
//

#include "JumpGameTwo.h"

int JumpGameTwo::jump(std::vector<int>& nums) {
    std::vector<int> dp(nums.size(), INT_MAX);

    dp[0] = 0;

    for (int i = 1; i < nums.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (j + nums[j] >= i) dp[i] = std::min(dp[i], dp[j] + 1);
        }
    }

    return dp[nums.size()-1];
}