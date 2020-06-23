#include "cxxlib.hpp"

// 1.4 Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words. 


bool is_palindrome_perm(string& s){
    int d[256] = {0};
    for (int i = 0; i < s.size(); ++i) {
        d[s[i]]++;
    }

    bool has_odd = false;
    for (int i = 0; i < 256; ++i) {
        if (has_odd && d[i] % 2 != 0)
            return false;
        else if (!has_odd && d[i] % 2 != 0)
            has_odd = true;
    }
    return true;
}

int main() {
    string s = "tactcoxa";
    if (is_palindrome_perm(s))
        cout << "True" << endl;
    else
        cout << "False" << endl;
}

