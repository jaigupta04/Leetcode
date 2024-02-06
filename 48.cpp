#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - 1 - i; j++) {
            swap(matrix[i][j], matrix[j][n - 1 - i]);
            swap(matrix[i][j], matrix[n - 1 - i][n - 1 - i - j + i]);
            swap(matrix[i][j], matrix[n - 1 - i - j + i][i]);
        }
    }

    // Print rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    rotate(matrix);

    return 0;
}
