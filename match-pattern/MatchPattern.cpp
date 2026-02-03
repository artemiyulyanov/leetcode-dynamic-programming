#include "MatchPattern.h"

bool MatchPattern::is_match(const std::string &text, const std::string &pattern) {
    const size_t n = text.length();
    const size_t m = pattern.length();

    std::vector<std::vector<bool>> dp(n, std::vector<bool>(m, false));

    return false;
}
