#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    // to print the all divisors of a given number n
    // time complexity of this approach is O(n)
    // for(int i = 1; i <= n; i++){
    //     if(n % i == 0){
    //         cout<<i<<endl;
    //     }
    // }

    // another approach
    // for(int i = 1; i <= sqrt(n); i++)
    // {
    //     if(n % i == 0){  // 36 % 2 == 0
    //         cout<<i<<" ";
    //         if( n / i != i){ // 36 /2 != 2
    //             cout<<n/i<<" "; // 36 /2 == 18
    //         }
    //     }
    // }

    //to print in the soretd order we use the vector in the c++
    // O(sqrt(n))
    vector<int> ls;
    for(int i = 1;  i*i <= n; i++){
        if(n % i == 0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
            }
        }
        
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls){
            cout<<it<<" ";
    }
    return 0;
    
}