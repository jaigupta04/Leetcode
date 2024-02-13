#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int>& nums) {
    vector<int> temp(nums.size() + 1, -1);

    for (int i = 0; i < nums.size(); ++i) 
        if (++temp[nums[i]] == 1) 
            return nums[i];

    return -1;
}

int main() {
    vector<int> nums = {3, 1, 3, 4, 2};
    cout << findDuplicate(nums);

    return 0;
}
