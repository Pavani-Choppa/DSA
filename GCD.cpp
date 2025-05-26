#include<bits/stdc++.h>
using namespace std;

int main(){
    //to find the gcd of a given number
    // GCD (Greatest Common Divisor), also known as HCF 
    // (Highest Common Factor), is the largest positive integer 
    // that divides two numbers without leaving a remainder.
    int m,n;
    int gcd = 1;
    cin>>m>>n;
    for(int i = 1; i <= min(m,n); i++){
        if(m % i == 0 && n % i == 0){
            gcd = i;
        }
    }
    cout<<"GCD Of : "<<m<<" and "<<n<< " is : " <<gcd;
}