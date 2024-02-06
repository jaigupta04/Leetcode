#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    for (int i = 0; i < nums2.size(); i++) nums1[m + i] = nums2[i];
    
    for (int i = 0; i < m + n; i++) {
        for (int j = 0; j < m + n - i - 1; j++) {
            if (nums1[j] > nums1[j + 1]) swap(nums1[j], nums1[j + 1]);
        }
    }
    
    for(int i = 0; i < nums1.size(); i++) cout << nums1[i] << "\t";
}

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    
    merge(nums1, 3, nums2, 3);

    return 0;
}
