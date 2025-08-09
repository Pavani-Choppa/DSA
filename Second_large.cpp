#include<bits/stdc++.h>
using namespace std;

int Second_smallest(int arr[],int n)
{   
    if(n < 2)
    {
        return -1;
    }
    int snum = INT_MAX;
    int ssnum = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if( arr[i] < snum )
        {
            ssnum = snum;
            snum = arr[i];
        }
        else if(arr[i] < ssnum && arr[i] != snum)
        {
            ssnum = arr[i];
        }
    }
    return ssnum;
}

int Second_largest(int arr[],int n)
{
    if(n < 2)
    {
        return -1;
    }
    int lnum = INT_MIN;
    int slnum = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > lnum)
        {
            slnum = lnum;
            lnum = arr[i];
        }
        else if(arr[i] > slnum && arr[i] != lnum)
        {
            slnum = arr[i];
        }
    }
    return slnum;
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
    int ssnum = Second_smallest(arr,n);
    cout<<"Second smallest number is  :"<<ssnum<<endl;
    int slnum = Second_largest(arr,n);
    cout<<"Second Largest number is  : "<<slnum;
    return 0;
}