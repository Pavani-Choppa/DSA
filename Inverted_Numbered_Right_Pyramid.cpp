#include<bits/stdc++.h>
using namespace std;

int main(){

    /* to print Inverted Numbered Right Pyramid
    1 2 3 4 5 
    1 2 3 4 
    1 2 3 
    1 2 
    1  */
    int n;
    cin>>n;
    for(int i = n ;i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}