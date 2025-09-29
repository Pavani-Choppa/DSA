#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void swapGreater(vector<int>& nums1, vector<int>& nums2, int ind1, int ind2) {
        if (nums1[ind1] > nums2[ind2]) {
            swap(nums1[ind1], nums2[ind2]);
        }
    }

public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int len = n + m;
        int gap = (len / 2) + (len % 2);

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                // Case 1: both pointers in nums1
                if (left < n && right < n) {
                    swapGreater(nums1, nums1, left, right);
                }
                // Case 2: left in nums1, right in nums2
                else if (left < n && right >= n) {
                    swapGreater(nums1, nums2, left, right - n);
                }
                // Case 3: both in nums2
                else {
                    swapGreater(nums2, nums2, left - n, right - n);
                }
                left++;
                right++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }

        // Finally copy nums2 into nums1 after nums1's elements
        for (int i = 0; i < m; i++) {
            nums1[n + i] = nums2[i];
        }
    }
};

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    vector<int> nums1(n + m);  // nums1 has size n+m (extra space for nums2)
    vector<int> nums2(m);

    
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }

    
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }

    Solution sol;
    sol.merge(nums1, n, nums2, m);

    for (int i = 0; i < n + m; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
