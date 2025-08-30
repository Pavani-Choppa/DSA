#include<bits/stdc++.h>
using namespace std;

/* Time Complexity === O(N)
   Space Complexity === O(1)
*/
int BuySellStock(int arr[], int n){
    int mini = arr[0];
    int profit = 0;
    for(int i = 1; i < n; i++){
        int cost = arr[i] - mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
    }
    return profit;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int res = BuySellStock(arr,n);
    cout<<"The maximum Profit is : "<<res;
    return 0;
}