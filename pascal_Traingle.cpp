#include <bits/stdc++.h>
using namespace std;

/*TC ----------> O(N^2)
SC ------------> O(N)
*/
// Function to generate one row of Pascal's Triangle
vector<int> generateRow(int r) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int col = 1; col < r; col++) {
        ans = ans * (r - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

// Function to generate full Pascal's Triangle
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    for (int i = 1; i <= numRows; i++) {
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> n;

    vector<vector<int>> result = generate(n);

    cout << "Pascal's Triangle up to " << n << " rows:\n";
    for (auto row : result) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
