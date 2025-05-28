#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    char character = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<character<<" ";
        }
        cout<<endl;
        character++;
    }
}