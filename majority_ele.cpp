#include<bits/stdc++.h>
using namespace std;

int findMajorityElement(int arr[],int n){

    int cnt = 0;
    for(int i =0; i <n; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i]){
                cnt++;
            }
        }
    if(cnt > (n/2))  return arr[i];
        
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int res = findMajorityElement(arr,n);
    cout<<"The Majority element that occured in an array is : "<<res;
}