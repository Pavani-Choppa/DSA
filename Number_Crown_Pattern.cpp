#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        for(int j = 1; j<2*n-(i+(i-1)); j++){
            cout<<"  ";
        }
        for(int j = i; j > 0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
