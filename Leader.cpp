#include<bits/stdc++.h>
using namespace std;
vector<int> LeadersOfArray(vector<int> &arr,int n){

    /* BRute Force Approach 
        Time Complexity : ~O(N^2)
        Space Complexity : O(N)
    */

    // bool leader = true;
    // vector<int> ans;
    // for(int i =0; i < n; i++){
    //     for(int j = i; j < n; j++){
    //         if(arr[j] > arr[i]){
    //             leader = false;
    //             break;
    //         }
    //     }
    //     if(leader == true) ans.push_back(arr[i]);
        
    // }

    /* Opimal Approach 
        Time Complexity : ~O(N)
        Space Complexity : O(N)
    */


    int maxi = INT_MIN;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxi) {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int> res = LeadersOfArray(arr,n);
    for(int i =0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}