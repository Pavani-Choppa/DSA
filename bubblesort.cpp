#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& arr,int n)
{
    // int n = arr.size();
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

    cout << "\nAfter bubble sort the sorted array is:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i  < n; i++)
        cin >> arr[i];

    cout << "The original array is:\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    bubble_sort(arr,n);

    return 0;
}
