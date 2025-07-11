#include<iostream>
using namespace std;

bool IfSorted(int arr[], int n){

    for(int i=0;i<(n-1);i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }
    return true;
}

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

        if(IfSorted(arr,n)){
            cout<<"YES"<<endl;
        }
        else{
            if(k==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}