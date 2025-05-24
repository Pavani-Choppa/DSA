#include<bits/stdc++.h>
using namespace std;



int main(){
    int x;
    cin>>x;
    int rev = 0;
    int original = x;
    
    while(x!=0){
        int rem = x % 10;
        if((rev > INT_MAX/10) || (rev < INT_MIN/10)){
            return 0;
        }
        rev = rev*10 + rem;
        x = x/10;
    }
    if(x<0) 
        cout<<"You Enterd Number : "<<original<<"is not a Palindrome Number";
        
    else if(original == rev)
        cout<<"You Enterd Number : "<<original<<" is Palindrome Number";
    else
        cout<<"You Enterd Number : "<<original<<" is Not a Palindrome Number";
        
    return 0;
}
