#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int max = 0;
        for(int i=0;i<n;i += 2){
            if(max < a[i]){
                max = a[i];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}