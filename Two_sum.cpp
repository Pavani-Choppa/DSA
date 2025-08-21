#include<bits/stdc++.h>
using namespace std;

string TwoSumProblem(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++){
        for(int j = i+1; j <n; j++){
            if(i == j) continue;
            if(arr[i] + arr[j] == target)
            {
                return "the taget is met";
            }
        }
    }
    return "target is not met";
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