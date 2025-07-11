#include<iostream>
using namespace std;

bool IfSorted(long long int a[], int n){

    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            return false;
        }
    }
    return true;
}

void Coins(long long int a[], int n, int k){
    
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            k++;
            a[i]++;
        }
    }
    k += 1;
    if(IfSorted(a, n)){
        cout<<k<<endl;
    }
    else{
        Coins(a, n, k);
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){

        int n; 
        cin>>n;  
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int k = 0;
        if(IfSorted(a,n)){
            cout<<k<<endl;
        }
        else{
            Coins(a, n, k);
        }
    }
    return 0;
}