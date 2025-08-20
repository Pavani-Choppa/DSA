#include<bits/stdc++.h>
using namespace std;


int logenstSubarray(vector<int> &arr, int n, int k){
   
    /*
        BruteForce Method 
        Time Complexity = O(N^2)
        Space Complexity = O(1)
    */
   
   
    // int maxLen = 0;

    // for(int i = 0; i < n; i++)
    // {
    //     int Sum = 0;
    //     for(int j = i; j < n; j++){
    //         Sum += arr[j];
    //         if(Sum == k){
    //             maxLen = max(maxLen,j - i + 1);
    //         }
    //     }
    // }
    // return maxLen;


    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i =0; i < arr.size(); i++)
    {
        sum =arr[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum-k;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i-preSumMap[rem];
            maxLen = max(maxLen,len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
     /*
        Optimal Approach
        Time Complexity = O(N)
        Space Complexity = O(1)
    */

    // int maxLen = 0, sum = 0, left = 0, right = 0;
    
    // while(right < n){
    //     sum += arr[right];

    //     while(sum > k && left <= right){
    //         sum -= arr[left];
    //         left++;
    //     }

    //     if(sum == k){
    //         maxLen = max(maxLen,right - left +1);
    //     }
    //     right++;
    // }
    return maxLen;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<"The Longest Subarray Lenght is : "<<logenstSubarray(arr,n,k);
}