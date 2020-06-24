#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <stack>
#include <queue>
#include <utility>

using namespace std;

// Print a 2D matrix
template <typename T>
void print_matrix(vector<vector<T>> matrix) {
    for (auto & row : matrix) {
        for (auto & e: row) {
            cout << e << " ";
        }
        cout << endl;
    }
    cout << endl;
}