#include "cxxlib.hpp"

 // 1.8 Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0.

void solve(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<bool> row(m,false);
    vector<bool> col(n,false);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        if (row[i]) {
            for (int j = 0; j < matrix[i].size(); ++j)
                matrix[i][j] = 0;
        }
    }
    for (int j = 0; j < n; ++j) {
        if (col[j]) {
            for (int i = 0; i < matrix.size(); ++i) 
                matrix[i][j] = 0;
        }
    }
}


 int main() {
    vector<vector<int>> matrix = {{0,1,2},{3,4,5},{7,8,9},{10,1,11}};
    cout << "original: " << endl;
    print_matrix(matrix);

    cout << "result: " << endl;
    solve(matrix);
    print_matrix(matrix);
 }