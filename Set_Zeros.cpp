#include <bits/stdc++.h>
// #include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();        // number of rows
    int n = matrix[0].size();     // number of cols

    vector<int> row(m, 0);
    vector<int> col(n, 0);

    // Step 1: Mark rows and columns that need to be zeroed
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: Update matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;  // input rows and cols

    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    setZeroes(matrix);

    // Print the updated matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
