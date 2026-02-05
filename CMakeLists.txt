cmake_minimum_required(VERSION 4.1)
project(leetcode_dynamic_programming)

set(CMAKE_CXX_STANDARD 20)

add_executable(leetcode-dynamic-programming main.cpp
        longest-palindrome/LongestPalindrome.cpp
        longest-palindrome/LongestPalindrome.h
        match-pattern/MatchPattern.cpp
        match-pattern/MatchPattern.h
        generate-parentheses/GenerateParentheses.cpp
        generate-parentheses/GenerateParentheses.h
        longest-valid-parentheses/LongestValidParentheses.cpp
        longest-valid-parentheses/LongestValidParentheses.h)