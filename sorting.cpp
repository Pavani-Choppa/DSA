#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++)
    {
        int min = i;
        for(int j = i+1; j < n ; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    cout<<endl<<"After selection sor array is : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    int n;
    cout<<"Enter the number of elements into array : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i  < n; i++){
        cin>>arr[i];
    }
    cout<<"The original array is : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    selection_sort(arr,n);
    return 0;
}