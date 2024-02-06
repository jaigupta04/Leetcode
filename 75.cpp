#include <iostream>
#include <vector>
using namespace std;

void sortColors( vector<int>& nums ) {
    int arr[3] = {0};
    int j = 0;
    
    for( int i = 0; i < nums.size(); i++ ){
        if( nums[i] == 0 ) arr[0]++;
        else if( nums[i] == 1 ) arr[1]++;
        else arr[2]++;
    }
    
    while( arr[0] != 0 ) {
        nums[j] = 0;
        j++;
        arr[0]--;
    }
    while( arr[1] != 0 ) {
        nums[j] = 1;
        j++;
        arr[1]--;
    }
    while( arr[2] != 0 ) {
        nums[j] = 2;
        j++;
        arr[2]--;
    }
    
    for( int i = 0; i < nums.size(); i++ ){
        cout << nums[i] << "\t";
    }
    
}

int main() {
    vector<int> nums = {2,0,1};
    sortColors( nums );

    return 0;
}
