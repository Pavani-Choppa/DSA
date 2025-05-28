#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =0; i < n; i++){
        char character = 'A';
        for(int j = 0; j <= i; j++){
            cout<<character<<" ";
            character++;
        }
        cout<<endl;
    }
    return 0;
}
