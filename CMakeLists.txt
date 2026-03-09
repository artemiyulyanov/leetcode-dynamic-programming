cmake_minimum_required(VERSION 4.1)
project(leetcode_tasks)

set(CMAKE_CXX_STANDARD 20)

add_executable(leetcode-tasks main.cpp
        longest-palindrome/LongestPalindrome.cpp
        longest-palindrome/LongestPalindrome.h
        match-pattern/MatchPattern.cpp
        match-pattern/MatchPattern.h
        generate-parentheses/GenerateParentheses.cpp
        generate-parentheses/GenerateParentheses.h
        longest-valid-parentheses/LongestValidParentheses.cpp
        longest-valid-parentheses/LongestValidParentheses.h
        climbing-stairs/ClimbingStairs.cpp
        climbing-stairs/ClimbingStairs.h
        palindrome-number/PalindromeNumber.cpp
        palindrome-number/PalindromeNumber.h
        pascal-triangle/PascalTriangle.cpp
        pascal-triangle/PascalTriangle.h
        longest-substring-without-repeating-characters/LongestSubstringWithoutRepeatingCharacters.cpp
        longest-substring-without-repeating-characters/LongestSubstringWithoutRepeatingCharacters.h)