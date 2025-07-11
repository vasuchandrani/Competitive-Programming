#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        bool t;
        cin>>t;
        if(t==true){
            cout<<"HARD";
            break;
        }
        else if(i==n-1){
            cout<<"EASY";
        }
    }
    return 0;
}