#include<bits/stdc++.h>
using namespace std;


int logenstSubarray(int arr[], int n, int k){
   
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

     /*
        Optimal Approach
        Time Complexity = O(N)
        Space Complexity = O(1)
    */
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    cout<<"The Longest Subarray Lenght is : "<<logenstSubarray(arr,n,k);
}