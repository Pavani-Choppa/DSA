#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 1;
    // one method which is O(n)
    // if(n == 1 || n == 2){
    //     cout<<n<<" is a Prime Number.";
    // }
    // for(int i = 2; i <= n; i++){
    //     if(n%i == 0){
    //         count++;
    //     }
    // }
    // if(count > 2){
    //     cout<<n <<" is not a Prime Number";
    // }
    // else{
    //     cout<<n<<" is a Prime Number.";
    // }

    // another method 
    // Time Complexity O(sqrt(n))
    for(int i = 2; i*i <= n; i++){ //n = 36
        if(n%i == 0){  //36 % 2 == 0
            count++;   // 2
            if(n/i != i){ // 36 / 2 == 18
                count++; // 3
            }
        }
    }
    if(count > 2){ // 3 > 2
        cout<<n <<" is not a Prime Number"; //for 32 this will print
    }
    else{
        cout<<n<<" is a Prime Number.";
    }

}