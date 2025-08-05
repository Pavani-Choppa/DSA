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
//     for(int i = n-1; i > 0; i--){
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


// void insertion_sort(vector<int> & arr, int n)
// {
//     for(int i = 0; i <= n-1; i++)
//     {
//         int j = i;
//         while(j > 0 && arr[j - 1] > arr[j]){
//             int temp = arr[j-1];
//             arr[j-1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }
//     cout<<endl<<"The array after Insertion Sorting is : "<<endl;
//     for(int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

void merge(vector<int> & arr, int low , int mid , int high)
{
    vector<int> temp;
    int left = low;
    int right = mid +1;

    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }

   
}

 void merge_sort(vector<int> & arr, int low , int high)
{
    if(low >= high) return;
    int mid = (low + high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
    
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
    // insertion_sort(arr,n);
    merge_sort(arr,0,n-1);

    cout<<endl<<"The array after Merge Sorting is : "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
    
    
    
