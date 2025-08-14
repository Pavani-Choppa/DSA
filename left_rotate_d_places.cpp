#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start,int end)
{
  while(start<end)
  {
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
void leftRotateDplaces(int arr[],int n, int k)
{
    
    if(n == 0) return;
    k = k % n;
    if(k > n) return ;

    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
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
    int k;
    cin>>k;
    leftRotateDplaces(arr,n,k);
    return 0;
}

