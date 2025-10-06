#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted halves
void mergeArray(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Function to count pairs where arr[i] > 2 * arr[j]
long long countPairs(vector<int> &arr, int low, int mid, int high) {
    long long count = 0;
    int right = mid + 1;

    for (int i = low; i <= mid; i++) {
        while (right <= high && (long long)arr[i] > 2LL * arr[right]) {
            right++;
        }
        count += (right - (mid + 1));
    }

    return count;
}

// Merge sort function that also counts reverse pairs
long long mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return 0;

    int mid = (low + high) / 2;
    long long count = 0;

    count += mergeSort(arr, low, mid);       // sort left half
    count += mergeSort(arr, mid + 1, high);  // sort right half
    count += countPairs(arr, low, mid, high); // count cross pairs
    mergeArray(arr, low, mid, high);         // merge both halves

    return count;
}

int main() {
    int n;
    
    cin >> n;

    vector<int> arr(n);
   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = mergeSort(arr, 0, n - 1);
    cout << "Number of reverse pairs: " << result << endl;

    return 0;
}
