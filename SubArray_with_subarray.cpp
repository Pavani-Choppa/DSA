#include<bits/stdc++.h>
using namespace std;

int CountSubArrayWithXor(int arr[],int n,int k){
    
    int xr = 0;
    map <int,int> mpp;
    mpp[xr]++;
    int cnt = 0;
    for(int i =0; i < n; i++){
        xr = xr ^ arr[i];
        int x = xr ^ k;
        cnt += mpp[k];
        mpp[xr]++;
    }
    return cnt;
}


int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int res = CountSubArrayWithXor(arr,n,k);
    cout<<"The SubArray With Subarrays is : "<<res;
    return 0;
}