#include<bits/stdc++.h>
using namespace std;

int findSingleElement(int arr[], int n){

    /*
        bruteforce approach
        Time Complexity: O(N^2)
        Space Complexity: O(1)
    */
    // for(int i =0; i < n; i++)
    // {
    //     int num = arr[i];
    //     int count = 0;
    //     for(int j = 0; j < n; j++)
    //     {
    //         if(arr[j] == num)
    //         {
    //             count++;
    //         }
    //     }
    //     if(count == 1) return num;
    // } 
    // return -1;



    
    /*
        Optimal approach
        Time Complexity: O(N^2)
        Space Complexity: O(1)
    */

    int xorr = 0;
    for(int i = 0; i < n; i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int res = findSingleElement(arr,n);
    cout<<"The single elemt that i found in array is : "<<res;
    return 0;
}