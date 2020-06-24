#include "cxxlib.hpp"

// 1.7 Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

void rotate(vector<vector<int>>& matrix) {

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix[i].size(); ++j) {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(auto & r : matrix) {
        reverse(r.begin(),r.end());
    }
}

int main() {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    print_matrix(matrix);
}