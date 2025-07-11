#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int b[n-1];
        for(int i=0;i<(n-1);i++){
            cin>>b[i];
        }

        int a[n] = {0};
        int x = 1;
        
        for(long long i=0;i<n-1;i++) {
            a[i] = a[i] | b[i];
            a[i+1] = b[i];
        }
        for(long long i=0;i<n-1;i++) {
            if ((a[i] & a[i+1])!=b[i]) {
                x = 0;
                break;
            }
        }
        
        if(x==1){
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
