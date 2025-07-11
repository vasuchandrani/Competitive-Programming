#include<iostream>
using namespace std;

bool IfSorted(int a[], int n){

    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            return false;
        }
    }
    return true;
}

void CountSquaring(int n, int a[], int count){

    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            if(a[i]==1 || a[i]==0){
                count = -1;
                break;
            }
            a[i] = (a[i]*a[i]);
            count++;
        }
        else{
            continue;
        }
    }
    if(count == -1 || IfSorted(a, n)){
        cout<<count<<endl;
    }
    else{
        CountSquaring(n, a, count);
    }
}

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        CountSquaring(n, a, 0);
    }
    return 0;
}