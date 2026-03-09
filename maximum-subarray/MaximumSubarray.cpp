//
// Created by Artemii on 3/9/2026.
//

#include "MaximumSubarray.h"

int MaximumSubarray::maxSubArray(std::vector<int> &nums) {
    std::vector<int> dp(nums.size(), INT_MIN);

    dp[0] = nums[0];
    int ans = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        dp[i] = std::max(nums[i], dp[i - 1] + nums[i]);
        ans = std::max(ans, dp[i]);
    }

    return ans;
}
