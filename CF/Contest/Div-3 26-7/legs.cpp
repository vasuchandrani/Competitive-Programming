#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int minimum = 0;
        while(n>2){
            n -= 4;
            minimum++;
        }
        if(n!=0)
            cout<<(minimum+1)<<endl;
        else
            cout<<minimum<<endl;
    }
    return 0;
}