#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    /*
       To print Diamond Star Pattern

                     *        
                   * * *      
                 * * * * *    
               * * * * * * *  
             * * * * * * * * *
             * * * * * * * * *
               * * * * * * *  
                 * * * * *    
                   * * *      
                     *        
    */
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout<<"  ";
        }
        for(int j =0; j< 2*i+1; j++){
            cout<<" *";
        }
        for(int j =0; j<n-i-1; j++){
            cout<<"  ";
        }
        cout<<endl;
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < i; j++){
            cout<<"  ";
        }
        for(int j =0; j < 2*n-(2*i+1); j++){
            cout<<" *";
        }
        for(int j = 0; j < i; j++){
            cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}