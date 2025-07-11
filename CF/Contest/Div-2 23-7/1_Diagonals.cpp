#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
    int t;
    cin>>t;
    int n, k;
    while(t--){
        cin>>n>>k;
        vector<int> v;
        int count = 0;
        for(int i=2;i<=2*n;++i){
            if(i<=(n+1)){
                v.push_back(i-1);
            } 
            else{
                v.push_back(2*n + 1 - i);
            }
        }
        sort(v.rbegin(), v.rend());
        for(int x: v){
            if(k<=0){
                break;
            }
            else{
                k -= min(x, k);
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

