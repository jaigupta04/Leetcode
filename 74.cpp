#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    int strRow = 0;
    int endRow = rows - 1;
    int mid, mid2;
    
    while (strRow <= endRow) {
        mid = (strRow + endRow) / 2;
        
        if (target < matrix[mid][0]) 
            endRow = mid - 1;
        else if (target >= matrix[mid][0] && target <= matrix[mid][cols - 1]) 
            strRow = rows;
        else 
            strRow = mid + 1;
    }
    
    strRow = 0;
    endRow = cols - 1;
    
    while (strRow <= endRow) {
        mid2 = (strRow + endRow) / 2;
        
        if (target == matrix[mid][mid2]) 
            return true;
        else if (target < matrix[mid][mid2]) 
            endRow = mid2 - 1;
        else 
            strRow = mid2 + 1;
    }
     
    return false;
}
           
int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    cout << searchMatrix(matrix, 3);

    return 0;
}
