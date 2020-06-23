#include "cxxlib.hpp"

// 1.3 URLify: Write a method to replace all spaces in a string with '%20': You may assume that the string has sufficient space at the end to hold the additional characters, and that you are given the "true" length of the string. (Note: if implementing in Java, please use a character array so that you can perform this operation in place.)

string URLify(string& s, int len) {
    string ss = s.substr(0,len);
    string res;
    for (int i = 0; i < ss.size(); ++i) {
        if (ss[i] == ' ')
            res += "%20";
        else
            res += string(1,ss[i]); 
    }
    return res;
}

int main() {
    string a = "Mr John Smith    ";
    cout << URLify(a,13) << endl;
}