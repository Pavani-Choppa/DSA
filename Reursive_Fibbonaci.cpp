#include<bits/stdc++.h>
using namespace std;

int recursive_fibonacci(int n){
    if(n == 0 ||n == 1 ) return n;
    else return recursive_fibonacci(n-1) + recursive_fibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout << recursive_fibonacci(i) << " ";
    }
    // cout << endl;
    return 0;

}