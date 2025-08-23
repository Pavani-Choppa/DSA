#include<bits/stdc++.h>
using namespace std;

 /*
        BruteForce Method 
        Time Complexity = O(N^2)
        Space Complexity = O(N)
    */
   
// string TwoSumProblem(int arr[], int n, int target)
// {
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j <n; j++){
//             // if(i == j) continue;
//             if(arr[i] + arr[j] == target)
//             {
//                 return "the taget is met";
//             }
//         }
//     }
//     return "target is not met";
// }


/*
        better solution
        Time Complexity = O(N LOG N)
        Space Complexity = O(N)
    */

vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i =0; i < nums.size(); i++){
            int a = nums[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end()){
                return{mpp[more],i};
            }
            mpp[a] = i;
        }
        return {-1,-1};
    }


/*
       OPTIMAL METHOD 
        Time Complexity = O(N)
        Space Complexity = O(1)
    */
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(),book.end());
    int left = 0 , right = n-1;
    for(int i = 0; i < n ;i++){
        int sum = book[left] + book[right];
        if(sum == target) return "YES";
        if(sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<TwoSumProblem(arr, n, target);
}