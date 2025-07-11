#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool check(vector<int> &ck, int i, int j) {
    
    int n = ck.size();
    ll sum = 0;
    for (int p=i ; p<=j ; p++) {
        sum += ck[p];
    }

    ll ckk = ((j-i+1) * ((j-i+1)+1))/2;

    if (ckk == sum) {
        return true;
    }
    else {
        return false;
    } 
        
}

void solveee() {
    int n; cin>>n;
    string s; cin>>s;

    int j = 0;

    for (int i = n - 1 ; i >= 0 ; i--) {
        if (s[i] == 's') {
            j = i; 
            break;
        }
    }

    vector<int> mx(n);


    int k = 1;
    for (int i=j;i<n; i++, k++) {
        mx[i] = k;
    }

    for (int i=j-1; i>=0 ; i--, k++) {
        mx[i] = k;
    } 


    for (int i=0; i<n; i++) {
        if (s[i] == 's' && !check(mx,i,n-1)) {
            cout<<"NO"<<endl; 
            return;
        }
        if (s[i] == 'p' && !check(mx,0,i)) {
            cout<<"NO"<<endl;
            return;    
        }
    }
    cout<<"YES"<<endl;
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        solveee();
    }

    return 0;
}