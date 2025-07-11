#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){

        cin>>n;
        int a[n];

        int count = 0;
        for(int i=1,j=0;i<=n;i++){
           if(i == n){
                a[j] = i;
                j++;
            }
            else{
                continue;
            }
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}