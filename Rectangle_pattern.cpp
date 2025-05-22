#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*to print the rectangle pattern  look like:
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *   */
    int n; //6
    // cout<<"Enter the number for how many lines of rectangle do you want to print :";
    cin>>n;
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
    return 0;
}