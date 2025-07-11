#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

void solvee() {

    int n; cin>>n;
    int k;  cin>>k;

    vector<int> res(n);

    for(int i=0; i<k-1; i++){
        res[i] = i+1;
    }
    int cur = k;
    for(int i=n-1; i>=k-1; i--){
        res[i] = cur;
        cur++;
    }

    for (int i=0; i<n; i++) {
        cout<<res[i]<<" ";
    }cout<<endl;
}

int main () {
    int t;  cin>>t;
    while (t--) {
        solvee();
    }

    return 0;
} 