#include<bits/stdc++.h>
using namespace std;

int MaxSubarraySum(int arr[],int n){
    /*   BRUTE FORCE METHOD
         TC -----> O(N^3)
         TC -----> O(1)
    */

    // int maxi = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     for(int j = i; j <n; j++){
    //         // subarray = arr[i.....j]
               
    //         int sum = 0;
    //         // add all the elements of subarray:
    //         for(int k = i; k <= j; k++){
    //             sum += arr[k];
    //         }
    //          maxi = max(maxi,sum);
    //     }
    // }
    // return maxi;

    /*   BETTER METHOD
         TC -----> O(N^2)
         TC -----> O(1)
    */
    // int maxi = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     int sum = 0;
    //     for(int j = i; j <n; j++){
                     
    //             sum += arr[j];
           
    //          maxi = max(maxi,sum);
    //     }
    // }
    // return maxi;
   

     /* optimal METHOD
         TC -----> O(N)
         TC -----> O(1)
    */
    int maxi = INT_MIN;
    int sum = 0;
    int start_ele = -1;
    int end_ele = -1;
    int start =0;
    for(int i=0; i < n; i++){
        sum += arr[i];

        // to satrt sub array consideration
        if(sum == 0) 
             start = i;

        if(sum > maxi){
            maxi = sum;
            start_ele = start;
            end_ele = i;
        }
        if(sum < 0){
            sum = 0; 
        }
    }
    if(maxi <= 0){
        maxi = 0;
    }

    cout<<"The Maximum Subarray is : ";
    for(int i = start_ele; i <= end_ele; i++){
       cout<<arr[i]<<" ";        
    }
    cout<<endl;
    return maxi;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int res = MaxSubarraySum(arr,n);
    cout<<"The Maximum Subarray Sum is : "<<res;
    return 0;
}