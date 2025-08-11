#include<bits/stdc++.h>
using namespace std;

int findingMissingValue(vector<int> &arr, int n)
{
    for(int i = 1; i <= n ; i++)
    {
        int flag = 0;
        for(int j =0; j < n-1; j++)
        {
            if(arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0) return i;
        
    }
    return -1;   
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