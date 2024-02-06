#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int counts[3] = {0};

    for (int num : nums) {
        counts[num]++;
    }

    int index = 0;
    for (int color = 0; color <= 2; color++) {
        while (counts[color] > 0) {
            nums[index] = color;
            index++;
            counts[color]--;
        }
    }

    // Print the sorted array
    for (int num : nums) {
        cout << num << "\t";
    }
}

int main() {
    vector<int> nums = {2, 0, 1};
    sortColors(nums);

    return 0;
}
