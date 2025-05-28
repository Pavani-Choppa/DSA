#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
        to print the
        E 
        E D 
        E D C 
        E D C B 
        E D C B A 

    
    */


    int n;
    cin>> n;
    for(int i = 0; i < n; i++){
        char c = 'A'+n-1;
        for(int j =0; j <= i && c >= 'A'; j++){
            cout<<c--<<" ";
        }
        cout<<endl;
    }
}