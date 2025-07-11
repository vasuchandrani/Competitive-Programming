#include<iostream>
using namespace std;;

int main(){
    int n, k;
    cin>>n>>k;

    int a[n];
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<5 && (5-a[i])>=k){
            count++;
        }
    }
    int ans = count/3;
    cout<<ans<<endl;
}