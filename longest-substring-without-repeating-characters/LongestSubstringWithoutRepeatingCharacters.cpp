//
// Created by Artemii on 3/9/2026.
//

#include "LongestSubstringWithoutRepeatingCharacters.h"

int LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(std::string s) {
    if (s.length() == 0) {
        return 0;
    }

    std::vector<int> dp(s.length(), 0);

    dp[0] = 1;
    int maxLength = 1;

    for (int i = 1; i < s.length(); i++) {
        int prevLength = dp[i - 1];

        int start = i - prevLength;
        int pos = s.find_last_of(s[i], i - 1);

        if (s.substr(start).find(s[i]) == std::string::npos || pos < start) {
            dp[i] = prevLength + 1;
        } else {
            dp[i] = i - pos;
        }

        maxLength = std::max(maxLength, dp[i]);
    }

    return maxLength;
}