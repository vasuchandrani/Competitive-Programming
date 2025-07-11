#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, m;
        cin>>n>>m;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a, a+n);
        long long int sum = 0;
        int idx = 0;
        long long int ans = 0;    
        for(int i=0;i<n;i++){
            sum += a[i];
            while(sum > m || (idx < n && a[i]-a[idx] > 1)){
                sum -= a[idx];
                idx++;
            }
            ans = max(ans, sum);
        }
        cout<<ans<<endl;
    }
}