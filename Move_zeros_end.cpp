#include<bits/stdc++.h>
using namespace std;

vector<int> MoveZerosEnd(vector<int> & arr,int n)
{
    /*
        BruteForce Approach 
        Time Complexity: O(N) + O(X) + O(N-X) ~ O(2*N)
        Space Complexity: O(N)
    */
    // vector<int> temp;
    // for(int i = 0; i < n; i++)
    // {
    //     if(arr[i] != 0)
    //     {
    //         temp.push_back(arr[i]);
    //     }
    // }

    // int num = temp.size(); //size of non-aero elements in temp array

    // for(int i = 0; i < num; i++)
    // {
    //     arr[i] = temp[i];
    // }
    // for(int i = num; i < n; i++)
    // {
    //     arr[i] = 0;
    // }
    // return arr;
    
    /*
        Optimal Approach 
        Time Complexity: O(N) 
        Space Complexity: O(1)
    */

    int j = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if(j == -1) return arr;

    for(int i = j+1; i < n; i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return arr;

}


int main()
{

    int n;
    cin>>n;
    
    vector<int> arr(n);

    for(auto &it : arr)
    {
        cin>>it;
    }

    
    cout<<"The Original Array is : "<<endl;
    for(auto &it1 : arr){
        cout<<it1<<" ";
    }

    vector<int> ans = MoveZerosEnd(arr,n);

    cout<<endl<<"The  Array After shifting Zeeros into end of the array  is : "<<endl;

    for(auto &it2 : ans){
        cout<<it2<<" ";
    }
}