#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    /* to print the symmetric-butterfly pattern
    
            *                 * 
            * *             * * 
            * * *         * * * 
            * * * *     * * * * 
            * * * * * * * * * * 
            * * * *     * * * * 
            * * *         * * * 
            * *             * * 
            *                 * 

    
    
    */
    for(int i = 1; i < n; i++){
        for(int j=1;j<=i;j++){
              cout<<"*"<<" ";
          }
          
          for(int j=0;j<2*n-(i+i);j++){
              cout<<"  ";
          }
          
          for(int j=1;j<=i;j++){
              cout<<"*"<<" ";
          }
          
          cout<<endl;
    }
    int iniS = 0;
      for(int i=0;i< n;i++){
          for(int j=1;j<=n-i;j++){
              cout<<"*"<<" ";
          }
          for(int j=0;j<iniS;j++){
              cout<<"  ";
          }
          for(int j=1;j<=n-i;j++){
              cout<<"*"<<" ";
          }
          iniS+=2;
          cout<<endl;
      }
}