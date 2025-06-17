#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print(int n){
   
   // Base Condition.
   if(cnt == n)  return;
   cout<<cnt<<endl;

   // Count Incremented
   cnt++;
   print(n);

}

int main(){
    int n;
    cin>>n;
    print(n);
  return 0;
}