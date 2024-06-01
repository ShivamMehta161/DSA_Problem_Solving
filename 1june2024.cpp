#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    
    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {  // nums[mid] == 2
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

int main() {
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    sortColors(nums1);
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << std::endl; // Output: 0 0 1 1 2 2

    std::vector<int> nums2 = {2, 0, 1};
    sortColors(nums2);
    for (int num : nums2) {
        std::cout << num << " ";
    }
    cout << std::endl; // Output: 0 1 2

    return 0;
}
