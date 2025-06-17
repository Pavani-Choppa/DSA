#include<bits/stdc++.h>
using namespace std;

void PrintNum(int n){
    if(n > 0) {
        cout<<n<<endl;
    }
    
    PrintNum(n-1);
}

int main(){
    int n;
    cin>>n;
    PrintNum(n);
    return 0;
}