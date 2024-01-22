#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    
    for (int i = 0; i < matrix.size()/2; i++){
        for(int j = i; j < matrix.size() - 1 - i; j++){
            swap(matrix[i][j], matrix[j][matrix.size() - 1 - i]);
            swap(matrix[i][j], matrix[matrix.size() - 1 - i][matrix.size() - 1 - i - j + i]);
            swap(matrix[i][j], matrix[matrix.size() - 1 - i - j + i][i]);
        }
    }
    
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.size(); j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    rotate(matrix);

    return 0;
}
