#include<bits/stdc++.h>
using namespace std;

int SumOfNnum(int n){
   if(n == 0) return 0;
   return n + SumOfNnum( n-1 );
   
}

int main(){
    int n;
    cin>>n;
    int result = SumOfNnum(n);
    cout<<result;
    return 0;
}