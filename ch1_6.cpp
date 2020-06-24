#include "cxxlib.hpp"

// 1.6 String Compression: Implement a method to perform basic string compression using the counts of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the "compressed"string would not become smaller than the original string, your method should return the original string. You can assume the string has only uppercase and lowercase letters (a - z).

string compress(const string& s) {
    string res;
    int curr = 1;
    char last = s[0];
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == last) {
            curr ++;
        }
        else {
            res = res + string(1,last) + to_string(curr);
            curr = 1;
            last = s[i];
        }
    }
    res = res + string(1,last) + to_string(curr);
    return res;
}

int main() {
    string s = "aabcccccaaaBBBAACZS";
    cout << compress(s) << endl;   
}