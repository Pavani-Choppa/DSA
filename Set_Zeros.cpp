#include <bits/stdc++.h>
// #include <vector>
using namespace std;

// vector<vector<int>> setZeroes(vector<vector<int>>& matrix,int n,int m) {
    // int m = matrix.size();        // number of rows
    // int n = matrix[0].size();     // number of cols

    // vector<int> row(m, 0);
    // vector<int> col(n, 0);

    // Step 1: Mark rows and columns that need to be zeroed
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (matrix[i][j] == 0) {
    //             row[i] = 1;
    //             col[j] = 1;
    //         }
    //     }
    // }

    // Step 2: Update matrix
    // for (int i = 0; i < m; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (row[i] || col[j]) {
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }
    // return matrix;
// }
  

vector<vector<int>> setZeroes(vector<vector<int>>& matrix, int n, int m) {
    int col0 = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){   // fix: should be m not n
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j != 0) matrix[0][j] = 0;
                else col0 = 0;
            }
        }
    }

    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][j] != 0){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if(matrix[0][0] == 0){
        for(int j = 0; j < m; j++) matrix[0][j] = 0; // fix: should be m not n
    }

    if(col0 == 0){
        for(int i = 0; i < n; i++){
            matrix[i][0] = 0;
        }
    }
    return matrix;
}

int main() {
    int n = 3, m = 3;
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};

    vector<vector<int>> ans = setZeroes(matrix, n, m);

    // print result
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
