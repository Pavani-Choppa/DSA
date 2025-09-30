#include<bits/stdc++.h>
using namespace std;

int MaxProductSubarray(int arr[],int n){
    int ans = INT_MIN;
    int pre = 1, suff = 1;
    for(int i =0;i < n; i++){
        if(pre == 0) pre = 1;
        if(suff == 0) suff = 1;

        pre = pre*arr[i];
        suff = suff*arr[n -i-1];
        ans = max(ans,max(pre,suff));
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i <n;i++){
        cin>>arr[i];
    }
    int res = MaxProductSubarray(arr,n);
    cout<<"The Maximum Product Subarray is : "<<res;
    return 0;
}