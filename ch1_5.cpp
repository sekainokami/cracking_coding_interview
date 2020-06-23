#include "cxxlib.hpp"

// 1.5 One Away: There are three types of edits that can be performed on strings: insert a character, remove a character, or replace a character. Given two strings, write a function to check if they are one edit (or zero edits) away.

bool replace(string& s, string& t) {
    bool mismatch = false;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != t[i]) {
            if (mismatch) return false;
            mismatch = true;
        }
    }
    return true;
}

bool insert(string& s, string& t) {
    // s is shorter
    int i = 0, j = 0;
    bool mismatch = false;
    while (i < s.size() && j < t.size()) {
        if (s[i] != t[j]) {
            if (mismatch) return false;
            mismatch = true;
            j++;
        }
        else {
            i++;
            j++;
        }
    }
    return true;
}

bool isOneEditDistance(string s, string t) {
    if (s == t) return false;
    if (s.size() == t.size())
        return replace(s,t);
    else if (s.size() + 1 == t.size())
        return insert(s,t);
    else if (s.size() == t.size() + 1)
        return insert(t,s);
    
    return false;
}