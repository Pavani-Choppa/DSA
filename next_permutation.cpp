#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        
        // Step 1: Find the breakpoint
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // If no breakpoint found -> reverse the whole array
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return nums;
        }

        // Step 2: Find the next greater element than nums[ind] from the back
        for (int i = n - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 3: Reverse the right half
        reverse(nums.begin() + ind + 1, nums.end());

        return nums;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3}; // Example input

    cout << "Original array: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    vector<int> result = sol.nextPermutation(nums);

    cout << "Next permutation: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
