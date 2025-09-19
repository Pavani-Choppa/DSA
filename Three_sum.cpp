#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& arr) {
    // set<vector<int>> st;
    // int n = nums.size();

    // for (int i = 0; i < n; i++) {
    //     set<int> hashset;
    //     for (int j = i + 1; j < n; j++) {
    //         int third = -(nums[i] + nums[j]);
    //         if (hashset.find(third) != hashset.end()) {
    //             vector<int> temp = {nums[i], nums[j], third};
    //             sort(temp.begin(), temp.end());
    //             st.insert(temp);
    //         }
    //         hashset.insert(nums[j]);
    //     }
    // }

    // // convert set to vector
    // vector<vector<int>> ans(st.begin(), st.end());
    // return ans;
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        //remove duplicates:
        if (i != 0 && arr[i] == arr[i - 1]) continue;

        //moving 2 pointers:
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                //skip the duplicates:
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }
    return ans;

}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    vector<vector<int>> result = threeSum(nums);

    for (auto& triplet : result) {
        for (int x : triplet) cout << x << " ";
        cout << endl;
    }
}
