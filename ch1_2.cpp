#include "cxxlib.hpp"

// 1.2 Check Permutation: Given two strings, write a method to decide if one is a permutation of the other. 

int is_permutation(const string& a, const string& b) {
    if (a.size() != b.size()) return false;

    int d[26] = {0};
    for (int i = 0; i < a.size(); ++i) {
        d[a[i]-'a']++;
    }

    for (int i = 0; i < b.size(); ++i) {
        d[b[i]-'a']--;
    }

    for (int i = 0; i < 26; ++i) {
        if (d[i] != 0)
            return false;
    }

    return true;
}

