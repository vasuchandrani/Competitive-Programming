#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define lli long long int

int main(){
    int t;
    cin>>t;
    while(t--){
        lli n, k;
        lli x;
        cin>>n>>k>>x;

        lli SumOfn = (n*(n+1))/2;
        
        lli min = (k*(k+1))/2;
        lli max = SumOfn - ((n-k)*(n-k+1))/2;

        if(min <= x && max >= x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}