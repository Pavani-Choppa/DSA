#include<bits/stdc++.h>
using namespace std;

void printName(int n){
    if(n > 0){
        cout<<"Pavani Choppa"<<endl;
    }
    printName(n-1);
}

int main(){
    int n;
    cin>>n;
    printName(n);
    return 0;
}