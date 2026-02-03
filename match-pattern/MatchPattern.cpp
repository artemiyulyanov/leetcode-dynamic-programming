#include "MatchPattern.h"

bool MatchPattern::is_match(const std::string &text, const std::string &pattern) {
    int n = text.length(), m = pattern.length();

    std::vector<std::vector<bool>> dp(n, std::vector<bool>(m, false));

    return false;
}
