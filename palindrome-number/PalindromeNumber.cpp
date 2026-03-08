//
// Created by Artemii on 3/9/2026.
//

#include "PalindromeNumber.h"

bool PalindromeNumber::isPalindrome(int x) {
    std::string num_as_text = std::to_string(x);

    std::vector<bool> dp(num_as_text.length()+1, false);

    dp[1] = num_as_text[0] == num_as_text[num_as_text.length()-1];

    for (int i = 2; i <= num_as_text.length(); i++) {
        dp[i] = dp[i-1] && num_as_text[i-1] == num_as_text[num_as_text.length()-i];
    }

    return dp[num_as_text.length()];
}