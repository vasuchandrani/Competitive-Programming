#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n, k;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);
       
        int i = 1, count = 1;
        int max = 1;
        while(i<n){
            if(arr[i]-arr[i-1]<=k){
                count++;
            }
            else{
                max = max > count ? max : count;
                count = 1; 
            }
            i++;
        }
        max = max > count ? max : count;
        cout<<(n-max)<<endl;
    }
    return 0;
}