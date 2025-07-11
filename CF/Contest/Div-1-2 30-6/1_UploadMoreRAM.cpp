#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        int second = 0;
        while(n>1){
            second += k;
            n -= 1;
        }
        second++;
        cout<<second<<endl;
    }
}