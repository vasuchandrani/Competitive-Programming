#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;

    int x,y;
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if((y-x)>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}