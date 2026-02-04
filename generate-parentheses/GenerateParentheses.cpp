#include "GenerateParentheses.h"

std::vector<std::string> GenerateParentheses::generateParentheses(int n) {
    std::vector<std::vector<std::string>> dp(n+1, std::vector<std::string>{});

    dp[0] = {""};
    dp[1] = {"()"};

    for (int i = 1; i <= n; i++) {
        std::vector<std::string> comb{};

        for (int j = 0; j < i; j++) {
            for (const std::string& first : dp[j]) {
                for (const std::string& second : dp[i-j-1]) {
                    std::string s = "(";
                    s += first;
                    s += ")";
                    s += second;

                    comb.push_back(s);
                }
            }
        }

        dp[i] = comb;
    }

    return dp[n];
}