#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    vector<int> temp(nums.size(), 0);
    int count;

    for (int i = 0; i < nums.size(); i++) {
        count = 0;
        for (int j = i; j < nums.size(); j++) {
            if (nums[i] == nums[j]) 
                count++;
        }
        
        if (count >= (nums.size() + 2) / 2) 
            return nums[i];
    }
        
    return -1;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums);

    return 0;
}
