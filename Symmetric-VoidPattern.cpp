#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    /*
        To print Symmetric void pattern

        * * * * * * * * * * 
        * * * *     * * * * 
        * * *         * * * 
        * *             * * 
        *                 * 
        *                 * 
        * *             * * 
        * * *         * * * 
        * * * *     * * * * 
        * * * * * * * * * * 

    
    */

    int iniS = 0;
      for(int i=0;i< N;i++){
          for(int j=1;j<=N-i;j++){
              cout<<"*"<<" ";
          }
          for(int j=0;j<iniS;j++){
              cout<<"  ";
          }
          for(int j=1;j<=N-i;j++){
              cout<<"*"<<" ";
          }
          iniS+=2;
          cout<<endl;
      }
      
      for(int i=1;i<=N;i++){
          for(int j=1;j<=i;j++){
              cout<<"*"<<" ";
          }
          
          for(int j=0;j<2*N-(i+i);j++){
              cout<<"  ";
          }
          
          for(int j=1;j<=i;j++){
              cout<<"*"<<" ";
          }
          
          cout<<endl;
      }
}