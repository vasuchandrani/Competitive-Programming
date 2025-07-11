#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int Xor(vector<int> a, int n){
    int x = a[0]^a[1];
    for(int i=2;i<n;i++){
        x = x^a[i];
    }
    return x;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int oddEven = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            oddEven++;
        }
        if(oddEven%2 == 0){
            if(Xor(a,n) == 0) {
                cout<<1<<endl;
                cout<<1<<" "<<n<<endl;
            }
            else {
                cout<<2<<endl;
                cout<<1<<" "<<n<<endl;
                cout<<1<<" "<<n<<endl;
            }
        }
        else{
            if(Xor(a,n) == 0) {
                cout<<1<<endl;
                cout<<1<<" "<<n<<endl;
            }
            else {
                cout<<4<<endl;
                cout<<1<<" "<<n<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
    }
    return 0;
}