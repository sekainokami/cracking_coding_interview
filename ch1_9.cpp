#include "cxxlib.hpp"

// 1.9 String Rotation: Assume you have a method isSubstring which checks if one word is a substring of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring (e.g., waterbottle a rotation of erbottlewat).

bool solve(string& x, string& y) {
    if (x.empty() || y.empty()) {
        return false;
    }
    string xx = x + x;
    return isSubstring(xx,y);
}