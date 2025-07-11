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

void Swapping(int a[], int n){

    bool flag = false;
    for(int i=1;i<(n-1);i++){
        if(a[i-1]<a[i] && a[i]>a[i+1]){
            flag = true;
            swap(a[i],a[i+1]);
        }
        else{
            continue;
        }
    }
    if(IfSorted(a, n)){
        cout<<"YES"<<endl;
    }
    else if(flag){
        Swapping(a, n);  
    }
    else{
        cout<<"NO"<<endl;
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

        if(IfSorted(a, n)){
            cout<<"YES"<<endl;
        }
        else{
            Swapping(a, n); 
        }
    }
    return 0;
}