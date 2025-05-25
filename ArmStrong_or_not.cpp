#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int original = n;
    while(n > 0){
        int rem = n %10;
        sum = sum + rem*rem*rem;
        n /= 10;
    }
    if(sum == original){
        cout<<"You Enterd Number : "<<original<<" is a Armstrong Number.";
    }
    else{
        cout<<"You Enterd Number : "<<original<<" is not a Armstrong Number.";

    }
    return 0;
}