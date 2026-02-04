#include "MatchPattern.h"

bool MatchPattern::is_match(const std::string &text, const std::string &pattern) {
    const size_t n = text.length();
    const size_t m = pattern.length();

    std::vector<std::vector<bool>> dp(n+1, std::vector<bool>(m+1, false));

    dp[0][0] = true;

    for (size_t j = 2; j <= m; j++) {
        if (pattern[j - 1] == '*') {
            dp[0][j] = dp[0][j - 2];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (pattern[j - 1] == text[i - 1] || pattern[j - 1] == '.') {
                dp[i][j] = dp[i - 1][j - 1];
            } else if (pattern[j - 1] == '*' && j >= 2) {
                dp[i][j] = dp[i][j - 2];

                if (pattern[j - 2] == text[i - 1] || pattern[j - 2] == '.') {
                    dp[i][j] = dp[i][j] || dp[i - 1][j];
                }
            }
        }
    }

    return dp[n][m];
}
