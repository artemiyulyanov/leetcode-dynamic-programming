//
// Created by Artemii on 2/5/2026.
//

#include "LongestValidParentheses.h"

int LongestValidParentheses::longestValidParentheses(const std::string &text) {
    const size_t length = text.length();
    std::vector<int> dp(length, 0);

    int ans = 0;

    for (int i = 1; i < length; i++) {
        if (text[i] == ')' && text[i-1] == '(') {
            dp[i] = 2;

            if (i - 2 >= 0) {
                dp[i] += dp[i - 2];
            }
        } else if (text[i] == ')' && text[i-1] == ')') {
            int j = i - dp[i - 1] - 1;
            if (j < 0 || text[j] != '(') continue;

            dp[i] = dp[i - 1] + 2;
            if (j - 1 >= 0) {
                dp[i] += dp[j - 1];
            }
        }

        ans = std::max(ans, dp[i]);
    }

    return ans;
}
