#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums, int target) {
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
     int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i =0; i <n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i +1; j < n; j++){
                if(j != i+1 && nums[j] == nums[j-1]) continue;
                int k = j+1;
                int l = n-1;
                while(k < l){
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == target){
                      vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                      ans.push_back(temp);
                      k++;
                      l--;
                      while(k < l && nums[k] == nums[k-1]) k++;
                      while(k < l && nums[l] == nums[l+1]) l--;
                    }
                    else if(sum < target) k++;
                    else l--;
                }
            }
        }
        return ans;
}

int main() {
    int n,target;
    cin>>n>>target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    vector<vector<int>> result = threeSum(nums,target);

    for (auto& triplet : result) {
        for (int x : triplet) cout << x << " ";
        cout << endl;
    }
}
