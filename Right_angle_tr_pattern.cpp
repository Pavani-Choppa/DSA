#include<bits/stdc++.h>
using namespace std;

int main(){
    /* to print Right-Angled Triangle Pattern
    Input Format: N = 3
    Result: 
    * 
    * * 
    * * * */
    int n;
    cin>>n;
    for(int i = 0; i< n; i++){
        for(int j = 0; j <= i ;j++){
            cout<<"* ";
        }
    }
        cout<<endl;
}