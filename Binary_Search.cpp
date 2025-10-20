#include <bits/stdc++.h>
using namespace std;

int BinarySearch(const vector<int>& a, int low, int high, int ele) {
    if (low > high) return -1;

    int mid = (low + high) / 2;

    if (a[mid] == ele) return mid;
    else if (a[mid] > ele)
        return BinarySearch(a, low, mid - 1, ele);
    else
        return BinarySearch(a, mid + 1, high, ele);
}

int Search(const vector<int>& a, int ele) {
    return BinarySearch(a, 0, a.size() - 1, ele);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ele;
    cin >> ele;

    sort(a.begin(), a.end()); // Binary search needs sorted input

    int res = Search(a, ele);

    if (res == -1)
        cout << "The element is not present in the array";
    else
        cout << "Element is present at index " << res;

    return 0;
}
