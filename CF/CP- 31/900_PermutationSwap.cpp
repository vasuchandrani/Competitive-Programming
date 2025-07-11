#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int k = 0;
    	for(int i=1;i<=n;i++){
    		int P; 
            cin>>P;
    		k = __gcd(k, abs(P - i));
    	}
    	cout<<k<<endl;
    }
    return 0;
}