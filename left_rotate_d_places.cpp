#include<bits/stdc++.h>
using namespace std;

void leftRotateDplaces(int arr[],int n)
{
    if(n == 0) return;
    int k = k % n;
    if(k > n) return ;

    int temp[k];
    for(int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    for(int i = k; i < n; i++)
    {
        arr[n-k] = arr[i];
    }
    for(int i = n-k; i < n; i++)
    {
        arr[i] = temp[i];
    }

    cout<<"Array After Rotating D places into Left is : ";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i= 0; i < n; i++)
    {
        cin>>arr[i];
    }

    leftRotateDplaces(arr,n);
    return 0;
}