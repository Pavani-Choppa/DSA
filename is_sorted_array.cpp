#include<bits/stdc++.h>
using namespace std;


bool isArraySorted(int arr[], int n)
{
    /* BruteForce Method 
        Time Complexity : O(N ^ 2)
    */
    
    // for (int i = 0; i < n; i++) 
    // {
    //     for (int j = i + 1; j < n; j++) 
    //     {
    //         if (arr[j] < arr[i])
    //             return false;
    //     }
    // }

    // return true;

    

    /* Optimal mehod
        Time Complexity : O(N)
    */

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr [i-1])
        {
            return false;
        }
       
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    //  printf("%s",isArraySorted(arr,n) ? "Array is Sorted" : "Array is not sorted");
   
    if (isArraySorted(arr, n))
        cout << "Array is sorted\n";
    else
        cout << "Array is NOT sorted\n";
}