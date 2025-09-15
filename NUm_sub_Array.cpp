#include<bits/stdc++.h>
using namespace std;

int Num_Of_Subarray(int arr[], int n)
{
    int k;
    cin>>k;
    map<int,int> mpp;
    int presum = 0, cnt = 0;
    for(int i =0; i < n; i++){
        presum += arr[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp[presum] += 1;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int len = Num_Of_Subarray(arr,n);
    cout<<" The Lenght of the SubArray is : "<<len;
    return 0;
}