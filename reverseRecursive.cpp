#include<bits/stdc++.h>
using namespace std;

int reverse(int n,int rev = 0){
    
    if(n == 0) return rev;
    else{
        int rem = n % 10;
        rev = rev *10 + rem;
        return reverse(n / 10,rev);
    }
    
}

int main(){
    int n;
    cin>>n;
    int result = reverse(n);
    cout<<result;
    return 0;

}