#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    
    for(int i = 1; i <= numRows; i++){
        vector<int> row(i, 1);
        result.push_back(row);
        
        for(int j = 2; j <= i-1; j++){
            result[i-1][j-1] = result[i-2][j-2] + result[i-2][j-1];
        }
    }
    
    return result;
}

int main() {
    vector<vector<int>> result;
    
    result = generate(5);
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout<<result[i-1][j-1]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
