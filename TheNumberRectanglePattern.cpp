#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    /*
        to print

        5 5 5 5 5 5 5 5 5 
        5 4 4 4 4 4 4 4 5 
        5 4 3 3 3 3 3 4 5 
        5 4 3 2 2 2 3 4 5 
        5 4 3 2 1 2 3 4 5 
        5 4 3 2 2 2 3 4 5 
        5 4 3 3 3 3 3 4 5 
        5 4 4 4 4 4 4 4 5 
        5 5 5 5 5 5 5 5 5 

    
    */
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int minDist = min(min(i, j), min(size - 1 - i, size - 1 - j));
            cout << n - minDist << " ";
        }
        cout << endl;
    }
}