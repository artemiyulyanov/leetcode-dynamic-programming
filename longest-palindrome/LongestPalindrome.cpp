#include "LongestPalindrome.h"

std::string LongestPalindrome::longestPalindrome(const std::string& text) {
    size_t n = text.length();

    std::vector<std::vector<bool>> dp(n, std::vector<bool>(n, false));

    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }

    for (int i = 0; i < n - 1; i++) {
        dp[i][i + 1] = text[i] == text[i+1];
    }

    int start = 0, maxLen = 0;

    for (int len = 0; len <= n; len++) {
        for (int l = 0; l + len - 1 < n; l++) {
            int r = l + len - 1;

            if (text[l] == text[r] && (len <= 2 || dp[l+1][r-1])) {
                dp[l][r] = true;

                if (maxLen < len) {
                    start = l;
                    maxLen = len;
                }
            }
        }
    }

    return text.substr(start, maxLen);
}