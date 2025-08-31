#include<bits/stdc++.h>
using namespace std;

/* for the pos == neg */
/* Bruteforce method ---->
     TC ---> O(N)+O(N/2)
     SC ---> O
*/
// vector<int> RearrangePosNeg(vector <int> &arr, int n)
// {
//         vector<int> pos,neg;
//         for(int i =0; i < n; i++){
//             if(arr[i] > 0){
//                 pos.push_back(arr[i]);
//             }
//             else{
//                 neg.push_back(arr[i]);
//             }
//         }

//         for(int i = 0; i < n/2; i++){
//             arr[i*2] = pos[i];
//             arr[i*2+1] = neg[i];

//         }
//         return arr;
// }

/* BETTER method ---->
     TC ---> O(N)
     SC ---> O
*/
// vector<int> RearrangePosNeg(vector <int> &arr, int n)
// {
//     vector<int> res(n,0);
//     int posInd = 0;
//     int negInd = 1;

//     for(int i = 0; i < n; i++){
//         if(arr[i] > 0){
//             res[posInd] = arr[i];
//             posInd +=2;
//         }
//         else{
//             res[negInd] = arr[i];
//             negInd +=2;
//         }
//     }
//     return res;
// }

/* for the pos != neg */
/* Bruteforce method ---->
     TC ---> ~~ O(N)
     SC ---> O
*/
vector<int> RearrangePosNeg(vector <int> &arr, int n)
{
    vector<int> pos,neg;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
        pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    
    if(pos.size() > neg.size()){

        for(int i = 0; i < neg.size(); i++){
            arr[i*2] = pos[i];
            arr[i*2+1] = neg[i];
        }

        int ind = neg.size()*2;
        for(int i = neg.size(); i < pos.size(); i++){
            arr[ind] = pos[i];
            ind++;
        }
    }
    else{

        for(int i = 0; i < pos.size(); i++){
            arr[i*2] = pos[i];
            arr[i*2+1] = neg[i];
        }

        int ind = pos.size()*2;
        for(int i = pos.size(); i < neg.size(); i++){
            arr[ind] = neg[i];
            ind++;
        }
    }

    return arr;
}



int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int> res = RearrangePosNeg(arr,n);
    cout<<"The rearranges array is : ";
    for(int i = 0; i < n; i++){
        cout<<res[i]<<" ";
    }
    return 0;
}