#include<bits/stdc++.h>
using namespace std;

int max_ele(int arr[],int n)
{
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;

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
    int max = max_ele(arr,n);
    cout<<"The max element from the given array is : "<<endl<<max<<endl;
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    int max2 = max_ele(arr2,n2);
    cout<<"The max element from the given array is : "<<endl<<max2;

    
}