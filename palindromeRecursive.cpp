#include<bits/stdc++.h>
using namespace std;

int reverse(int n, int rev = 0){

    if(n == 0){
        return rev;
    }
    else{
          int rem = n % 10;
          rev = rev*10 + rem;
          return reverse( n / 10, rev);
    }
}

string Palindrome(int n){
    if(reverse(n) == n){
        return "You Entered Number is a palindrome number";
    }
    else{
        return "You Entered Number is not a palindrome number";
    }
}

int main(){
    int n;
    cin>>n;
    string result = Palindrome(n);
    cout<<result;
    return 0;
}