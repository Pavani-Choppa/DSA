#include<bits/stdc++.h>
using namespace std;

int main(){
    
    /*  to print the Inverted Right Pyramid
    * * * * * 
    * * * * 
    * * * 
    * * 
    *   */
    int n;
    cin>>n;
    for(int i =n ;i >0; i--){
        for(int j =i; j> 0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}