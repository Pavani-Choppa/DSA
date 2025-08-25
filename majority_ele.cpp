#include<bits/stdc++.h>
using namespace std;

int findMajorityElement(vector <int> arr,int n){

    /*brute force tc ---> (O(n^2))
        sc ---> o(1)    
    */
    // int cnt = 0;
    // for(int i =0; i <n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(arr[j] == arr[i]){
    //             cnt++;
    //         }
    //     }
    // if(cnt > (n/2))  return arr[i];
        
    // }
    // return -1;

    /*better solution by using Hashing 
        tc -----> O(N log n)
        sc -----> O(N)
    */

    // map <int,int> mpp;
    // for(int i = 0; i < n ; i++){
    //     mpp[arr[i]]++;
    // }
    // for(auto it : mpp){
    //     if(it.second > n/2){
    //         return it.first;
    //     }
    // }
    // return -1;

     /*optimal solution by more's voting algorithm
        tc -----> O(N) + O(N)
        sc -----> O(1)
    */

    int cnt =0;
    int el;
    for(int i =0; i <n; i++){
        if(cnt == 0){
            cnt++;
            el = arr[i];
        }
        else if(arr[i] == el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i = 0; i < n;i++){
        if(arr[i] == el) cnt1++;
        if(cnt1 > n/2) return el;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector <int>arr(n);

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int res = findMajorityElement(arr,n);
    cout<<"The Majority element that occured in an array is : "<<res;
}