#include <iostream>
#include <vector>
using namespace std;

void setZeros( vector<vector<int>>& matrix ) {
    int sizeRow = matrix.size();
    int sizeCol = matrix[0].size();
    int col[sizeCol] = {-1}, row[sizeRow] = {-1};
    
    for( int i = 0; i < sizeRow; i++ ) {
        int count = 0;
        for( int j = 0; j < sizeCol; j++ ) {
            if( matrix[i][j] == 0 ) {
                col[j] = j;
                count++;
            }
        }
        if( count>0 ) {
            row[i] = i;
        }
    }

    for( int i = 0; i < sizeRow; i++ ) {
        if( i == row[i] ) {
            for( int j = 0; j < sizeCol; j++ ) {
                matrix[i][j] = 0;
            }
        } else {
            for( int j = 0; j < sizeCol; j++ ) {
                if( j == col[j] ) matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> myMatrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeros( myMatrix );

    return 0;
}
