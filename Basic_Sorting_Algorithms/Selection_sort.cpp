#include <iostream>
#include <vector>
using namespace std;

// Function to sort the array using Selection Sort logic
vector<int> sortArray(vector<int> nums) {

    int size = nums.size();

    // Outer loop: fixes one position at a time
    for (int i = 0; i < size - 1; i++) {

        // Inner loop: find the smallest element in remaining array
        for (int j = i + 1; j < size; j++) {

            // If smaller element found, swap
            if (nums[i] > nums[j]) {
                swap(nums[i], nums[j]);
            }
        }
    }

    // Return the sorted vector
    return nums;
}

int main() {
    vector<int> nums = {5, 3, 2, 1};

    // Call sorting function
    vector<int> sorted = sortArray(nums);

    // Print sorted array
    for (int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << " ";
    }

    return 0;
}
