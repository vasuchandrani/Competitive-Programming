#include<iostream>
using namespace std;

int main(){
    int s,n;
    cin>>s,n;
    int x,y;

    int flag=0;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(s>x){
            flag=1;
            s=s+y;
            continue;
        }
        if(s<x){
            continue;
        }
    }
    if(flag==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}