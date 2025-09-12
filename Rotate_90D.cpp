#include<bits/stdc++.h>
using namespace std;


// return type must be vector<vector<int>>
vector<vector<int>> RotateArrayBy90(vector<vector<int>> &arr, int n) {
    /* BRUTEFORCE METHOD*/
    // vector<vector<int>> ans(n, vector<int>(n)); // create n x n matrix

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         ans[j][n - 1 - i] = arr[i][j]; // rotate 90 degrees clockwise
    //     }
    // }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n)); // 2D vector initialization

    // input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> res = RotateArrayBy90(arr, n);

    // output rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
