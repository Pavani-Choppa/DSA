#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());  // sort by starting time
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        if (ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]); // no overlap, add interval
        } else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]); // merge
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of intervals: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(2));
    cout << "Enter the intervals (start end):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    vector<vector<int>> ans = mergeIntervals(arr);

    cout << "Merged intervals: ";
    for (auto &p : ans) {
        cout << "{" << p[0] << ", " << p[1] << "} ";
    }
    cout << endl;

    return 0;
}
