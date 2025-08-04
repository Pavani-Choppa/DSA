#include<bits/stdc++.h>
using namespace std;

// void selection_sort(vector<int>& arr, int n){
//     for(int i = 0; i < n-1; i++)
//     {
//         int min = i;
//         for(int j = i+1; j < n ; j++){
//             if(arr[j] < arr[min]){
//                 min = j;
//             }
//         }
//         int temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }

//     cout<<endl<<"After selection sort the sorted  array is : "<<endl;
//     for(int i = 0; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void bubble_sort(vector<int>& arr, int n)
// {
//     // int n = arr.size();
//     for(int i = n-1; i >= 0; i--){
//         for(int j = 0; j < i; j++){
//             if(arr[j] > arr[j+1])
//                 swap(arr[j], arr[j+1]);
//         }
//     }

//     cout << "\nAfter bubble sort the sorted array is:\n";
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }


void insertion_sort(vector<int> & arr, int n)
{
    for(int i = 0; i <= n-1; i++)
    {
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    cout<<endl<<"The array after Insertion Sorting is : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
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
    // selection_sort(arr,n);
    // bubble_sort(arr,n);
    insertion_sort(arr,n);
    return 0;
}
    
    
    
