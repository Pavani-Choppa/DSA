#include<bits/stdc++.h>
using namespace std;

vector<int> CalculateUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    vector<int> Union;
    for(int i =0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for(int i = 0; i < n; i++)
    {
        s.insert(arr2[i]);
    }
    for(auto &it : s)
    {
        Union.push_back(it);
    }
    return Union;
}

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i = 0; i< n; i++)
    {
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];

    for(int i = 0; i< m; i++)
    {
        cin>>arr2[i];
    }
    vector<int> Union = CalculateUnion(arr1,arr2,n,m);
    cout<<"The Union of two arrays is : ";
    for(auto &it : Union)
    {
        cout<<it<<" ";
    }
    return 0;
}