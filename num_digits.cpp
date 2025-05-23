#include<bits/stdc++.h>
using namespace std;

void countTheDigits(){
    int n;
    cin>>n;
    int count = 0;
    while(n > 0){
        int last_digit = n % 10;
        count++;
        n = n/10;
    }
    cout<<count;
}
int main(){
    countTheDigits();
    return 0;
}