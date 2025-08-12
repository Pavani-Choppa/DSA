#include<bits/stdc++.h>
using namespace std;

int findingMissingValue(vector<int> &arr, int n)
{
    /*
        Bruteforce Approach 
        Time Complexity: O(N^2)
        Space Complexity: O(1) 
    */
    // for(int i = 1; i <= n ; i++)
    // {
    //     int flag = 0;
    //     for(int j =0; j < n-1; j++)
    //     {
    //         if(arr[j] == i)
    //         {
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(flag == 0) return i;
        
    // }
    // return -1;   

    /*
        Optimal Approach 
        Time Complexity: O(N)
        Space Complexity: O(1) 
    */
    int sum =( n*(n+1))/2;
    int s2 =0;
    for(int i = 0; i < n-1; i++)
    {
        s2 += arr[i];
    }
    int res = sum - s2;
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n-1);
    for (auto &it : arr) {
        cin >> it;
    }

    int res = findingMissingValue(arr,n);
    cout<<"The missing Value in an array is : "<<res; 
    return 0;
}