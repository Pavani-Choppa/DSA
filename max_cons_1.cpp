#include<bits/stdc++.h>
using namespace std;


/*  
    To find the maximum consecutive numbers of ones's
    Time Complexity: O(N) since the solution involves only a single pass.
    Space Complexity: O(1) because no extra space is used.
*/
int maxConsequetiveOfOnes(vector<int> &arr, int n)
{
    int count = 0;
    int max1 = 0;
    for(int i =0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            count++;
        }
        else{
            count = 0;
        }

       max1 =  max(count,max1);
    }
    return max1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }
    int res = maxConsequetiveOfOnes(arr,n);
    cout<<"The cout of the max Consecutives of one's is : "<<res; 
}