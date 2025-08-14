#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n)
{
    /* BruteForce Approach 
       Time Complexity : O(n)
       Space Complexity : O(n)  */

    // int temp[n];
    // for(int i = 0 ; i < n ; i++)
    // {
    //     temp[i] = arr[i+1];
    // }
    // temp[n-1] = arr[0]; //putting the first element of arr into the first elemnt of temp array
    // cout<<endl<<"The Array after performing the left rotation : "<<endl;
    // for(int i = 0;  i < n; i++)
    // {
    //     cout<<temp[i]<<" ";
    // }

    /* Optimal Approach 
       Time Complexity : O(n)
       Space Complexity : O(1)  */
    int temp = arr[0];
    for(int i = 0; i< n; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n -1] = temp;
    cout<<endl<<"The Array after performing the left rotation : "<<endl;
    for(int i = 0;  i < n; i++)
    {
        cout<<arr[i]<<" ";
    }


}


int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"The Original Array is : "<<endl;
    for(int i = 0;  i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    leftRotate(arr,n);
    return 0;
}