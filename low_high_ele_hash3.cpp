#include <bits/stdc++.h>
using namespace std;

void FreqFind(int arr[], int n) {
    unordered_map<int, int> freqMap;
    
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    int maxfreq = 0, minfreq = INT_MAX;
    int maxEle = -1, minEle = -1;

    for (auto it : freqMap) {
        if (it.second > maxfreq) {
            maxfreq = it.second;
            maxEle = it.first;
        }
        if (it.second < minfreq) {
            minfreq = it.second;
            minEle = it.first;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main() {
    int n;
    cin >> n;

    // Better to use vector or fixed-size array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    FreqFind(arr, n);
    return 0;
}
