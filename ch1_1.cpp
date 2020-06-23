#include "cxxlib.hpp"

// 1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?

bool is_all_unique(const string& s) {
    int d[26] = {0};
    for (int i = 0; i < s.size(); ++i) {
        d[s[i]-'a']++;
    }
    for (int i = 0; i < 26; ++i) {
        if (d[i] > 1)
            return false;
    }
    return true;
}
