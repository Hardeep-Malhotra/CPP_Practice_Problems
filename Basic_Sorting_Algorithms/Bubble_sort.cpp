#include <iostream>
#include <vector>
using namespace std;

// ==================================================
// Bubble Sort Algorithm
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// ==================================================

vector<int> bubbleSort(vector<int> nums) {

    int size = nums.size();

    // Outer loop: number of passes
    for (int i = 0; i < size - 1; i++) {

        // Inner loop: compare adjacent elements
        for (int j = 0; j < size - i - 1; j++) {

            // Swap if elements are in wrong order
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }

    // Return sorted array
    return nums;
}

int main() {
    vector<int> nums = {5, 3, 2, 1};

    // Calling Bubble Sort function
    vector<int> sorted = bubbleSort(nums);

    // Printing sorted array
    for (int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << " ";
    }

    return 0;
}
